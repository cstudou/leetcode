class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> vec;
        vector<vector<int>> flag = matrix;
        for(int i=0; i<matrix.size(); i++)
            for(int j=0; j<matrix[i].size(); j++) 
                flag[i][j] = 0;
        int row = matrix.size();
        if(!row)    return vec;
        bool temp = true;
        int col = matrix[0].size();
        int f = (row%2)?row/2+1:row/2;
        for(int i=0; i<f && temp; i++)
        {
            int k = row - i - 1;
            for(int j=i; j<=col-i-1; j++)
            {
                if(flag[i][j])  
                {
                    temp = false;
                    break;
                }
                vec.push_back(matrix[i][j]);
                flag[i][j] = 1;
            }
            for(int j=i+1; j<=row-i-1; j++)
            {
                if(flag[j][col-i-1])  
                {
                    temp = false;
                    break;
                }
                vec.push_back(matrix[j][col-i-1]);
                flag[j][col-i-1] =1;
            }
            for(int j=col-i-2; j>=i; j--)
            {
                if(flag[row-i-1][j])  
                {
                    temp = false;
                    break;
                }
                vec.push_back(matrix[row-i-1][j]);  
                flag[row-i-1][j] = 1;
            }
            for(int j=row-i-1-1; j>i; j--)
            {
                if(flag[j][i])  
                {
                    temp = false;
                    break;
                }
                vec.push_back(matrix[j][i]);
                flag[j][i]=1;
            
            }
        }
        return vec;
    }
};
