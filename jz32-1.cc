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
    vector<int> levelOrder(TreeNode* root) {
        queue<TreeNode *> qu;
        vector<int> vec;
        if(!root)   return vec;
        qu.push(root);
        while(!qu.empty())
        {
            auto it = qu.front();
            qu.pop();
            vec.push_back(it->val);
            if(it->left)    qu.push(it->left);
            if(it->right)   qu.push(it->right);
        }
        return vec;
    }
};
