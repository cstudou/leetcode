class Solution {
public:
    Solution()
    {
        fill(f, f+100000, 0);
    }
    int fib(int n) {
        if(n==0 || n==1)
        {
            f[n] = n;   return n;
        }
        f[n-1] = f[n-1] ? f[n-1] : fib(n-1);
        f[n-2] = f[n-2] ? f[n-2] : fib(n-2);
        return (f[n-1] + f[n-2]) % 1000000007;
    }
private:
    int f[100000];
};
