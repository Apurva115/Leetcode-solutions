class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count =0;
        int max1=0;
        for(auto x: nums)
        {
            if(x==1)
            {
                count++;
            }
            else
            {
                if(max1<count) 
                    max1= count;
                count=0;
            }
        }
        return max(max1,count);
    }
};