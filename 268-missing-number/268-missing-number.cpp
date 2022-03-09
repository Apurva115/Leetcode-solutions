class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int res =0;
        int i;
        for( i=0; i< nums.size(); i++)
        {
            res^= nums[i];
            res^=i;
        }
        res^=i;
        return res;


        
    }
};