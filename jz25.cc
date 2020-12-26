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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *root;
        if(!l1 && !l2)  return NULL;
        if(l1 && !l2)   return l1;
        if(l2 && !l1)   return l2;
        ListNode *head = new ListNode;
        root = head;
        while(l1 && l2)
        {
            if(l1->val < l2->val)   
            {
                head->next = l1;
                head = l1;
                l1 = l1->next;
            }
            else if(l1->val > l2->val)
            {
                head->next = l2;
                head = l2;
                l2=l2->next;
            }
            else
            {
                head->next = l1;
                head=l1;
                l1 = l1->next;
                head->next = l2;
                head=l2;
                l2 = l2->next;
            }
        }
        if(l1)  head->next = l1;
        if(l2) head->next= l2;
        
        head = root->next;
        delete root;
        return head;
    }

};
