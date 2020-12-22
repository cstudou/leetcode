/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int> preorder(Node* root) {
        stack<Node*> st;
        vector<int> vec;
        if(root == NULL)    return vec;
        st.push(root);
        while(!st.empty())
        {
            //用栈存，一层一层pop
            Node* i = st.top();
            st.pop();
            vec.push_back(i->val);
            for(int j=i->children.size()-1; j>=0; --j)
            {
                st.push(i->children[j]);
            }
        }
        return vec;
    }
};
