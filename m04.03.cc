/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    vector<ListNode*> listOfDepth(TreeNode* tree) {
        queue<TreeNode *> q;
        vector<ListNode *> vec;
        
        if(tree == NULL)    return vec;
        q.push(tree);
        while(!q.empty())
        {
            //层序遍历
            //每次的size就是每层大小
            int len = q.size();
            ListNode *tail = new ListNode;
            ListNode *head = tail;
            for(int i=0; i<len; i++)
            {
                TreeNode *node = q.front(); q.pop();
                tail->next = new ListNode(node->val);
                tail = tail->next;
                if(node->left)   q.push(node->left);
                if(node->right)  q.push(node->right);
            }
            vec.push_back(head->next);
        }
        return vec;
    }
};
