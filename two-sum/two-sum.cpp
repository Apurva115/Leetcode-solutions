class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> frequency;
        vector<int> ans;
        for(int i=0; i<nums.size(); i++)
        {
            if(frequency.find(target-nums[i])!= frequency.end() && i != frequency[target-nums[i]])
            {
                return {i,frequency[target-nums[i]]};
            }
            else
            {
                frequency[nums[i]] = i;
            }
        }
        return ans;
        
        
    }
};