class Solution {
public:
    void lettercase(string input, string output, vector<string> & ans)
    {
        if(input.size() == 0)
        {
            ans.push_back(output);
            return;
        }
        
        
        
        if(isalpha(input[0]))
        {
            string output1 = output;
            string output2 = output;
            char ch = tolower(input[0]);
            output1.push_back(ch);
            
            char ch1 = toupper(input[0]);
            output2.push_back(ch1);
            input.erase(input.begin()+0);
            lettercase(input, output1, ans);
            lettercase(input, output2, ans);
            
            
        }
        else
        {
            string output1 = output; 
            output1.push_back(input[0]);
            input.erase(input.begin()+0);
            lettercase(input, output1, ans);
            
        }
        
        
    }
    vector<string> letterCasePermutation(string s) {
        vector<string> ans;
        string ouput = "";
        lettercase(s,ouput,ans);
        return ans;
    }
};