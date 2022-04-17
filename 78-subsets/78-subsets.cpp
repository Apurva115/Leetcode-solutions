class Solution {
public:
    void subset(vector<int> input, vector<int> output, vector<vector<int>> & ans)
    {
        if(input.size() == 0)
        {
            ans.push_back(output);
            return;
        }
        
        vector<int> output1 = output;
        vector<int> output2 = output;
        output2.push_back(input[0]);
        input.erase(input.begin()+0);
        subset(input,output1,ans);
        subset(input,output2, ans);
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> output;
        subset(nums, output, ans);
        return ans;
        
        
        
    }
};