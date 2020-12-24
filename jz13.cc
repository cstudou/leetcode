class Solution {
public:
    int cou(int x, int y)
    {
        int res = 0;
        while(x)
        {
            res+=x%10; x/=10;
        }
        while(y)
        {
            res +=y%10; y/=10;
        }
        return res;
    }
    void dfs(int i, int j, int k)
    {
        if(i<0||i>=row||j<0||j>=col||vis[i][j]||cou(i,j)>k)    return ;
        vis[i][j] = true;
        dfs(i-1,j,k);
        dfs(i+1,j,k);
        dfs(i,j-1,k);
        dfs(i,j+1,k);
    }
    int movingCount(int m, int n, int k) {
        row = m; col = n;
        //for(int i=0; i<m; i++)
        //    for(int j=0; j<n; j++)
            {
                dfs(0,0,k);
            }
        int res = 0;
        for(int i=0; i<110; i++)
            for(int j=0; j<110; j++)    if(vis[i][j]) 
            {
                res ++;
                //cout <<i<<" "<<j<<endl;
            }
        return res;
    }
private:
    bool vis[110][110];
    int row,col;
};
