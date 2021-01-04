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
    int depth(TreeNode *root)
    {
        if(!root)   return 0;
        int x = depth(root->left);
        int y = depth(root->right);
        return (x > y ? x : y) + 1;
    }
//          1
//      2      2
//    3   o  o   3
//   4 o        o 4 
    bool isBalanced(TreeNode* root) {
        if(root == NULL)    return true;
        //int x = depth(root->left);
        //int y = depth(root->right);
        
        if(abs(depth(root->left)-depth(root->right)) > 1)    return false;
        return isBalanced(root->right) && isBalanced(root->left);
    }
};
