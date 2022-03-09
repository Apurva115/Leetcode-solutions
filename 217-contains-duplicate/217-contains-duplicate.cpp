class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> frequency;
        for(auto x: nums)
        {
            if(frequency.find(x) != frequency.end())
                return true;
            frequency[x] = 1;
            
            
        }
        return false;
    }
};