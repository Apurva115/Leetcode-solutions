class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> pair_num_index;
        for(int i=0; i<nums.size(); i++)
        {
            if(pair_num_index.find(target-nums[i])!=pair_num_index.end())
            {
                return{i, pair_num_index[target-nums[i]]};
            }
            else
            {
                pair_num_index[nums[i]]=i;
            }
        }
        return {};
        
        
    }
};