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
    ListNode* reverseList(ListNode* head) {
        if(head == NULL)    return head;
        stack<ListNode *> st;
        while(head)
        {
            
            st.push(head);
            head = head->next;
        }
        ListNode *root = st.top();
        ListNode *ret = root;
        st.pop();
        while(!st.empty())
        {
            root->next = st.top();
            st.pop();
            root = root->next;
        }
        root->next = NULL;
        return ret;
        
    }
};
