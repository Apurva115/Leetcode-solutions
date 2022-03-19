class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> frequency;
        vector<int> target_pair;
        for(int i=0; i<nums.size(); i++)
        {
            if(frequency.find(target - nums[i]) == frequency.end())
                frequency[nums[i]] = i;
            else
            {
                target_pair.push_back(i);
                target_pair.push_back(frequency[target-nums[i]]);
                break;
            }
        }
        return target_pair;
        
    }
};