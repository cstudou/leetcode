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

   
    bool isSymmetric(TreeNode* root) {
        if(!root)   return true;
        if(!(root->left) && !(root->right)) return true;
        queue<TreeNode*> q;
        q.push(root);
        bool flag = true;
        while(!q.empty() && flag)
        {
            vector<int > vec;
            auto len = q.size();
            for(int i=0; i<len; i++)
            {
                auto it = q.front();
                q.pop();
                if(it->left)    
                {
                    q.push(it->left);
                    vec.push_back(it->left->val);
                }
                else
                {
                    vec.push_back(0x3f3f3f3f);
                }
                if(it->right)    
                {
                    q.push(it->right);
                    vec.push_back(it->right->val);
                }
                else
                {
                    vec.push_back(0x3f3f3f3f);
                }
                
            }
            for(int i=0; i<vec.size()/2; i++)
            {
                if(vec[i] != vec[vec.size()-i-1])
                {
                    flag = false;
                    break;
                }
            }

        }
        return flag;
    }
};
