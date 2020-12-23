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
    void inorder(TreeNode *root)
    {
        if(root == NULL)    return ;
        inorder(root->left);     
        qu.push(root);
        inorder(root->right);
    }
    TreeNode* increasingBST(TreeNode* root) {
        if(root == NULL)    return NULL;
        inorder(root);
        auto cur = qu.front();
        qu.pop();
        //cout << qu.size();
        cur->left = cur->right = NULL;
        auto cou = cur;
        while(!qu.empty())
        {
            auto ret = qu.front();
            qu.pop();
            cur->right = ret;
            ret->left = ret->right = NULL;
            cur = ret;
        }
        return cou;
    }
private:
    queue<TreeNode *> qu;
};
