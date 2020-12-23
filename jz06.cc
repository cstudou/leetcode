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
//反转链表
 
    vector<int> reversePrint(ListNode* head) {
        ListNode* pre = NULL, *cur = head;
        ListNode * nxt = head;
        while(cur)
        {
            nxt = cur->next;
            cur->next = pre;
            pre = cur;
            cur = nxt;
        }
        vector<int> vec;
        head = pre;
        while(head) 
        {
            vec.emplace_back(head->val);
            head=head->next;
        }
        return vec;
    }
};
