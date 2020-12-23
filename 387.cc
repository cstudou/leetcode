iclass Solution {
public:
    int firstUniqChar(string s) {
        map<char, int> mp;
        int index = -1;
        for(int i=0; i<s.size(); i++)
        {
            if(mp.find(s[i]) == mp.end())
            {
                mp[s[i]] = 1;
               // index = i;
            }
            else    mp[s[i]]++;
        }
        for(int i=0; i<s.size(); i++)
        {
            if(mp[s[i]] == 1)   
            {
                index = i;
                break;
            }
        }
        return index;
    }
};
