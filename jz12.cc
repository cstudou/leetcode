class Solution {
public:
    bool dfs(vector<vector<char>>& board, int i, int j, string &word, int k)
    {
        if(i>=row || i<0 || j>=col || j<0 || board[i][j]!=word[k])  return false;
        if(k == word.size()-1)  return true;
        board[i][j] = '\0';
        //回溯
        bool res = dfs(board,i+1,j,word,k+1) || dfs(board,i-1,j,word,k+1) || dfs(board,i,j+1,word,k+1) || dfs(board, i,j-1,word,k+1);
        board[i][j] = word[k];
        return res;
    }
    bool exist(vector<vector<char>>& board, string word) {
        row = board.size();
        col = board[0].size();
        for(int i=0; i<row; i++)
            for(int j=0; j<col; j++)
                if(dfs(board, i, j, word, 0))   return true;
        return false;
    }
private:
    bool vis[300][300];
    int row, col;
};


 


