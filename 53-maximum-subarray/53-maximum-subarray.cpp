class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if(nums.size() == 1)
            return nums[0];
        int curr = nums[0];
        int maxSum = nums[0];
       
        
        for(int i=1; i<nums.size(); i++)
        {
            curr = max(nums[i], curr+nums[i]);
            if(maxSum < curr)
                maxSum =curr;
        }
        return maxSum;
        
    
        
    }
};