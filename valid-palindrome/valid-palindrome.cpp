class Solution {
public:
    static bool isNotAlum(char c)
    {
        return isalnum(c) == 0;
    }
    bool isPalindrome(string s) {
        transform(s.begin(), s.end(),s.begin(), ::tolower);
        s.erase(remove_if(s.begin(), s.end(), isNotAlum), s.end());
        int left = 0;
        int right = s.length() -1;
        while(left < right)
        {
            
            if(s[left] != s[right] )
            {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};