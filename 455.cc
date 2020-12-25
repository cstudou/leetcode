class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int count = 0, index = 0;
        if(s.size() == 0)   return 0;
        for(int i=0; i<g.size(); )
        {
            if(s[index] >= g[i])
            {
                count ++;
                i++;
                index++;
            }
            else
            {
                index++;
            }
            if(index == s.size())
            {
                break;
            }
        }
        return count;
    }
};
