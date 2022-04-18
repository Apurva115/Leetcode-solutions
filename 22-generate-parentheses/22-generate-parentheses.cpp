class Solution {
public:
    void paren(int open, int close, string output,vector<string> &ans)
{
    if(open ==0 && close == 0)
    {
        
        ans.push_back(output);
        return;
    }
    if(open != 0)
    {
        
     
        string output1 = output;
        output1.push_back('(');
        paren(open-1, close, output1,ans);
            
    }
    if(close >open)
    {
        string output2 = output;
        output2.push_back(')');
        paren(open, close-1, output2,ans);
    }
       

}
    vector<string> generateParenthesis(int n) {
        string output ="(";
    vector<string> ans;
        
        
    paren(n-1,n,output,ans);
        return ans;
        
    }
};