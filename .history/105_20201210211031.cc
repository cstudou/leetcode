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
        root->right = create(l0+i-l1+1,r0,i+1,r1,x,y,m);
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