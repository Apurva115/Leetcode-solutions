class Solution {
public:
    void reverse(vector<char>& s, int start, int end)
    {
        if(start >= end)
            return;
        reverse(s,start+1,end-1);
        char temp = s[start];
        s[start] = s[end];
        s[end] = temp;        
        
    }
    void reverseString(vector<char>& s) {
        reverse(s,0,s.size()-1);
        
 
    }
};