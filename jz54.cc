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
    void func(TreeNode *root, int k)
    {
        if(!root)   return;
        func(root->right, k);
        data ++ ;
        if(data == k)   ret = root->val;
        func(root->left, k);
    }
    int kthLargest(TreeNode* root, int k) {
        //int ret = -1;
        func(root, k);
        data = 0;
        return ret;
    }
private:
    int data;
    int ret;
};
