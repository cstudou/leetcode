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
    int minDepth(TreeNode* root) {
        queue<TreeNode *> q;
        int depth = 0;
        if(root)    q.push(root);
        while(q.size())
        {
            int len = q.size();
            for(int i=0; i<len; i++)
            {
                TreeNode *a = q.front();
                q.pop();
                if(a->left)  q.push(a->left);
                if(a->right)    q.push(a->right);
                if(!a->left && !a->right)   return depth+1;
            }
            depth++;
           
        }
        return depth;
    }
};