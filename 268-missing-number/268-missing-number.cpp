class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int len = nums.size()+1;
        int ans;
        vector<int> frequency(len, 0);
        for(int i=0; i<nums.size(); i++)
        {
            frequency[nums[i]]++;
            
        }
        for(int i=0; i<len; i++)
        {
            if(frequency[i]== 0)
            {
                ans = i;
                break;
            }
        }
        return ans;

        
    }
};