class Solution {
public:
    void subset(vector<int> input, vector<int> output, vector<vector<int>> & ans)
    {
        if(input.size() == 0)
        {
            ans.push_back(output);
            return;
        }
        
        int k = input[0];
        
       
        input.erase(input.begin()+0);
        subset(input,output,ans);
        output.push_back(k);
        subset(input,output, ans);
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> output;
        subset(nums, output, ans);
        return ans;
        
        
        
    }
};