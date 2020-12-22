/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int depth(TreeNode *root)
    {
        if(root == NULL)    return 0;
        int l = depth(root->left);
        int r = depth(root->right);
        if(l==-1 || r==-1)  return -1;
        if(l-r>1 || l-r<-1) return -1;
        return l > r ? l+1 : r+1;
        
    }
    bool isBalanced(TreeNode* root) {
        return depth(root) != -1;
    }
};
