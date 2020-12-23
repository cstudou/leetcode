class Solution {
public:
    string replaceSpace(string s) {
        string str;
        string f = "%20";
        for(int i=0; i<s.size(); i++)
        {
            if(s[i] == ' ')
            {
                str+=f;
            }
            else str+=s[i];
        }
        return str;
    }
    
};
