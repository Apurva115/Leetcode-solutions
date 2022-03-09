class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> pair;
        vector<int> ans;
        for(int i=0; i<nums.size(); i++)
        {
            if(pair.find(target - nums[i]) != pair.end())
            {
                ans.push_back(i);
                ans.push_back(pair[target-nums[i]]);
            }
            pair[nums[i]] =i;
        }
        return ans;
        
    }
};