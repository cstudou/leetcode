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
    TreeNode* mirrorTree(TreeNode* root) {
        if(root == NULL)    return NULL;
        TreeNode *head = root;

        TreeNode *left = root->left;
        TreeNode *right = root->right;

        root->left = root->right;
        root->right = left;
        
        mirrorTree(root->left);
        mirrorTree(root->right);
        return head;

    }
};
