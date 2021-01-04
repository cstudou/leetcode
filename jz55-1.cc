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
    int maxDepth(TreeNode* root) {
        queue<TreeNode *> q;
        if(root == NULL) return 0;
        int cou = 0;
        q.push(root);
        while(q.size())
        {
            cou++;
            int len = q.size();
            for(int i=0; i<len; i++)
            {
                auto it = q.front();
                q.pop();
                if(it->left)    q.push(it->left);
                if(it->right)   q.push(it->right);
            }
        }
        return cou;
    }
};
