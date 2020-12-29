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
    bool dfs(TreeNode *a, TreeNode *b)
    {
        if(!b)  return true;
        if(!a)    return false;
        if(a->val != b->val)    return false;
        return dfs(a->left,b->left) && dfs(a->right, b->right);
    }
    bool isSubStructure(TreeNode* A, TreeNode* B) {
        if(!A)  return false;
        if(!B)  return false;
        return dfs(A,B) || isSubStructure(A->left,B) || isSubStructure(A->right, B);
    }
};
