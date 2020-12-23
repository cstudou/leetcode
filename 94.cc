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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> vec;
        if(root == NULL)    return vec;
        stack<TreeNode*> st;
        st.push(root);
        while(root->left)    
        {
            st.push(root->left);
            root = root->left;
        }
        while(!st.empty())
        {
            auto cur = st.top();         
            vec.push_back(cur->val);
            st.pop();
            //if(cur->right)
            auto p = cur->right;
            while(p)
            {
                st.push(p); p=p->left;
            }
           

            
           
        }
        return vec;
    }
};
