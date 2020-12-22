class Solution {
public:
    bool wordPattern(string pattern, string s) {
        int a[25];
        vector<string> str;
        string temp = "";
        for(int i=0; i<s.size(); i++)
        {
            if(s[i] == ' ')
            {
                str.push_back(temp);
                temp = "";
                continue;
            }
            temp += s[i];
        }
        if(temp != "")  str.push_back(temp);
        unordered_map<char, string> mp;
        unordered_set<string> se;
        bool flag = true;
       // cout << str.size();
       if(pattern.size() != str.size()) return false;
        for(int i=0; i<pattern.size(); i++)
        {
            if(mp.find(pattern[i]) == mp.end() && (se.find(str[i]) == se.end())) 
            {
                se.insert(str[i]);
                mp.insert(make_pair(pattern[i], str[i]));
            }
            else
            {
                //cout << mp[pattern[i]] << "  " << pattern[i];
                if(mp[pattern[i]] != str[i] )
                {
                    flag = false;
                    break;
                }
            }
        }
        return flag;
    }
};
