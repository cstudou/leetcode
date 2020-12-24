class Solution {
public:
    int cuttingRope(int n) {
       if(n<=3)  return n-1;
       dp[1] = 1, dp[2] = 2, dp[3] = 3;
       for(int i=4; i<=n; i++)
       {
           int maxn = -1;
           for(int j=1; j<=i/2; j++)
           {
               maxn = max(maxn, dp[j]*dp[i-j]);
            }
            dp[i] = maxn;
       }
       return dp[n];

    }
private:
    int dp[200];
};
