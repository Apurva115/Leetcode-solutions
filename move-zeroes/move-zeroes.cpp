class Solution {
public:
  
    void moveZeroes(vector<int>& nums) {
       vector<int> duplicate;
     
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i] !=0)
                duplicate.push_back(nums[i]);
            
            
        }
        int j;
        for(j=0; j<duplicate.size(); j++)
        {
            nums[j] = duplicate[j];
        }
        for(int i=j; i<nums.size(); i++)
        {
            nums[i] =0;
        }
        
    }
};