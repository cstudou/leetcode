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
    ListNode* deleteNode(ListNode* head, int val) {
        ListNode *begin = head;
        if(head->val == val)    return head->next;
        while(begin->next)
        {
            if(begin->next->val == val)
            {
                begin->next = begin->next->next;
                break;
            }
            else
            {
                begin = begin->next;
            }
        }
        return head;
    }
};
