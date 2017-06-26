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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int add = 0;
        ListNode * head;
        ListNode * temp;
        ListNode * tempNext;
        int x = 0;
        int y = 0;
        while(1)
        {
            if(l1 != NULL)
            {
                x = l1->val;
                l1 = l1->next;
            }
            else
                x = 0;
            if(l2 != NULL)
            {
                y = l2->val;
                l2 = l2->next;
            }
            else 
                y = 0;
            temp = new ListNode(x + y + add);

            //cout<<temp->val<<endl;
            if(temp->val >= 10)
            {
                temp->val = temp->val - 10;
                add = 1;
            }
            else
                add = 0;
            
            if(head == NULL)
            {
                head = temp;
            }
            else
            {
                tempNext = temp;
                temp-
            }
            if(l1 == NULL && l2 == NULL)
            {
                break;
            }
            tempNext = (ListNode *)malloc(sizeof(ListNode));
            temp->next = tempNext;
            temp = temp->next;
        }
        return head;
    }
};