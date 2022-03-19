class Solution {
public:
    bool isAnagram(string s, string t) {
        int frequency1[26] = {0};
        int frequency2[26] = {0};
        for(int i=0; i<s.length(); i++)
        {
            frequency1[s[i] - 'a']++;
            
        }
        for(int j=0; j<t.length(); j++)
        {
            frequency2[t[j] - 'a']++;
        }
        for(int i=0; i< 26; i++)
        {
            if(frequency1[i] != frequency2[i])
                return false;
        }
        return true;
        
    }
};