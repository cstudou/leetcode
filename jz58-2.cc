class Solution {
public:
    string reverseLeftWords(string s, int n) {
        string temp = s.substr(0,n);//, s.begin()+n);
        string res = s.substr(n, s.size());
        return res + temp;
    }
};
