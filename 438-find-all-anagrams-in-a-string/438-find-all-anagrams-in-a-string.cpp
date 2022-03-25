class Solution {
public:
    bool isAnagram(string a, string b)
    {
        int count1[26] ={0};
        int count2[26] = {0};
        if(a.length() != b.length())
            return false;
        for(int i=0; i<a.length(); i++)
        {
            count1[a[i]- 'a']++;
        }
        for(int i=0; i<b.length(); i++)
        {
            count2[b[i]- 'a']++;
        }
        for(int i =0; i<26; i++)
        {
            if(count1[i]!= count2[i])
                return false;
        }
        return true;
    
    }
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        int windowSize = p.length();
        int count = 0;
        if(isAnagram(s.substr(0,windowSize), p))
            ans.push_back(0);
        int i;
        if( 1 < s.length())
        {
            i=1;
        }
        int j = windowSize;
        while(j< s.length())
        {
            if(isAnagram(s.substr(i,windowSize), p))
                ans.push_back(i);
            i++;
            j++;
        }
        return ans;
        
        
    }
};