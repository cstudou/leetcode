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
    TreeNode* pre = NULL;
    TreeNode* t1 = NULL, *t2 = NULL;
    void inorder(TreeNode *root)
    {
        if(!root) return ;
        inorder(root->left);
        if(pre!=NULL && root->val < pre->val)
        {
            //cout << "haha";
            if(t1 == NULL)  t1 = pre;
            t2 = root;  //可能只有一个错位
        }
        pre = root;
        
        inorder(root->right);
    }
    void recoverTree(TreeNode* root) {
        inorder(root);
          
        swap(t1->val, t2->val);
    }
};