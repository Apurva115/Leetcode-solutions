class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ans;
        
        if(nums.size()==1)
        {
            ans.push_back(nums[0]*nums[0]);
            return ans;
        }
        ans.assign(nums.size(),0);
        int left = 0;
        int k = nums.size()-1;
        int right = nums.size()-1;
        while(left <=right)
        {
            if(nums[left]*nums[left]> nums[right]*nums[right])
            {
                ans[k] = nums[left]*nums[left];
                left++;
                k--;
            }
            else
            {
                ans[k]= nums[right]*nums[right];
                k--;
                right--;
            }
            
        }
        return ans;
    }
};