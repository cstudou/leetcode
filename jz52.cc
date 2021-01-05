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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int lena = 0, lenb = 0;
        auto x = headA, y = headB;
        while(x)
        {
            lena++; x=x->next;
        }
        while(y)
        {
            lenb++; y=y->next;
        }
        int len = abs(lena-lenb);
        if(lena > lenb)
        {
            while(len--)    headA=headA->next;
        }
        if(lenb > lena)
        {
            while(len--)    headB = headB->next;
        }
        
        while(headA && headB)
        {
            if(headA == headB)
            {   
                break;
            }
            headB=headB->next;
            headA = headA->next;
        }
        
        return headA;
    }
};
