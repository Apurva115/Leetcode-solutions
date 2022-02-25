class Solution {
public:
    vector<int> merge(vector<int>& arr1, vector<int>& arr2)
    {
        vector<int> ans;
        int i=0;
        int j=0;
        
        while(i<arr1.size() && j<arr2.size())
        {
            if(arr1[i]<=arr2[j])
            {
                ans.push_back(arr1[i]);
                i++;
                
            }
            else
            {
                ans.push_back(arr2[j]);
                j++;
            }
        
        }
        while(i<arr1.size())
        {
            ans.push_back(arr1[i]);
            i++;
        }
        while(j<arr2.size())
        {
            ans.push_back(arr2[j]);
            j++;
        }
        return ans;
    }
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> arr1;
        vector<int> arr2;
        for(auto x: nums)
        {
            if(x>=0)
            {
                arr1.push_back(x*x);
            }
            else
            {
                arr2.push_back(x*x);
            }
        }
        if(arr2.size()==0)
        {
            return arr1;
        }
        reverse(arr2.begin(), arr2.end());
        if(arr1.size()==0)
        {
            return arr2;
        }
      

        vector<int> ans;
        ans= merge(arr1, arr2);
        return ans;
        
        
        

        
    }
};