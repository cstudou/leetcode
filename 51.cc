/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    
    TreeNode* create(int l0,int r0, int l1, int r1, vector<int>& x,vector<int>& y, map<int,int> &m)
    {
        if(l0>r0 || l1>r1)  return NULL;
        TreeNode *root = new TreeNode(x[l0]);
        int i = m[x[l0]];
        root->left = create(l0+1,l0+i-l1,l1,i-1,x,y,m);
        root->right = creaclass Solution {
public:
    vector<vector<string>> mp;;
    bool isok(vector<string> &p,int line, int row)
    {
        for(int i=line-1,j=row-1; i>=0 && j>=0; j--,i--)
        {
            if(p[i][j] == 'Q')  return false;
        }
        for(int i=line+1,j=row-1; i<p.size() && j>=0; j--,i++)
        {
            if(p[i][j] == 'Q')  return false;
        }
        for(int i=row-1; i>=0; i--)
        {
            if(p[line][i] == 'Q')    return false;
        }
        return true;
    }
    void vaild(vector<string> &m, int row)
    {
        if(row == m.size())
        {
            mp.push_back(m);
            return ;
        }
        
        //枚举列
        for(int i=0; i<m.size(); ++i)
        {
            
            if(isok(m, i, row))  
            {
                m[i][row] = 'Q';
                vaild(m, row+1);
                m[i][row] = '.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
       
       
        vector<string> vec;
        string str(n,'.');
        for(int j=0; j<n; ++j)
        {
            vec.push_back(str);
        }
      

       //for(int i=0; i<n; i++)
       {   
        //   vec[i][0] = 'Q';
           vaild(vec, 0);        //第一个皇后在第0行
          //  vec[i][0] = '.';
       }
       return mp;
    }
};te(l0+i-l1+1,r0,i+1,r1,x,y,m);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder)     {
        map<int, int> mp;
        for(int i=0; i<inorder.size(); ++i)
        {
            //int j = ::find(inorder.begin(), inorder.end(), preorder[i]);
            mp[inorder[i]] = i;  //建立索引
        }
        return create(0,preorder.size()-1,0,inorder.size()-1,preorder,inorder,mp);
      
    }
};