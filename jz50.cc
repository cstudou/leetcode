class Solution {
public:
    char firstUniqChar(string s) {
        //if(s.size() == 0) return ' ';
        int m[30] = {};
        for(int i=0; i<s.size(); i++)
        {
            m[s[i]-'a']++;
        }
        char c = '#';
        for(int i=0; i<s.size(); i++)
        {
            if(m[s[i]-'a'] == 1)
            {
                c = s[i];
                break;
            }
        }
        if(c == '#')    c=' ';
        return c;
    }
};
