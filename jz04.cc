class Solution {
public:
//右上往左下看是二叉查找树
    bool findNumberIn2DArray(vector<vector<int>>& matrix, int target) {
        if(matrix.size() == 0)  return false;
        int len = matrix.size();
        int n = matrix[0].size();
        int i = 0, j = n-1;
        //cout << i <<" " <<j;
        while(1)
        {
            if(j<0 || i==len)  return false;
            if(matrix[i][j] < target) i++;
            else if(matrix[i][j] > target)  j--;
            else return true;
            
        }
        
    }
};
