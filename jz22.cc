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
    ListNode* getKthFromEnd(ListNode* head, int k) {
        int s= k;
        ListNode *fast=head, *later=head;
        while(k--)
        {
            head=head->next;
        }
        while(head)
        {
            head=head->next;
            later = later->next;
        }
        return later;
    }
};
