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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> vec;
        queue<TreeNode *>   q;
        if(!root)   return vec;
        q.push(root);
        int index = 0;
        while(!q.empty())
        {
            int len = q.size();
            vector<int> temp;
            if(index % 2 == 0)
            {
                for(int i=0; i<len; i++)
                {
                    auto it = q.front(); q.pop();
                    if(it->left)    q.push(it->left);
                    if(it->right)   q.push(it->right);
                    temp.push_back(it->val);
                }
            }
            else
            {
                stack<int> st;
                for(int i=0; i<len; i++)
                {
                    auto it = q.front(); q.pop();
                    if(it->left)    q.push(it->left);
                    if(it->right)   q.push(it->right);
                    st.push(it->val);
                }
                while(!st.empty())
                {
                    auto it = st.top(); st.pop();
                    temp.push_back(it);
                }
            }
         
            index ++;
            vec.push_back(temp);
        }
        return vec;

    }
};
