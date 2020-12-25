class Solution {
public:
    double myPow(double x, int n) {
        double pos = x;
        double res = 1;
        bool flag = true;
        long long s = n;
        if(n < 0)   s=-s,flag=false;
        while(s)
        {
            if(s&1) res = res * pos;
            s>>=1;
            pos = pos*pos;
        }
        if(!flag)   return 1.0/res;
        return res;
    }
};
