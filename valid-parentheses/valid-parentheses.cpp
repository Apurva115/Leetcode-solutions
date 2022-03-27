class Solution {
public:
    bool isValid(string str) {
        stack<char> s;
        int i=0;
        while(i< str.length())
        {
            if(str[i] == '(' || str[i] == '{' || str[i] == '[')
            {
                s.push(str[i]);
                i++;
            }
            else
            {
                if(s.empty())
                    return false;
                if( (s.top() == '(' && str[i] != ')' ) || (s.top() == '[' && str[i] != ']' )|| (s.top() == '{' && str[i] != '}' ) )
                {
                    return false;
                }
                s.pop();
                i++;
            }
            
        }
        if(!s.empty())
                return false;
            return true;
        
    }
};