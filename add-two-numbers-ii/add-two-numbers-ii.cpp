/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverse(ListNode* l1)
    {
        ListNode* curr = l1;
        ListNode* prev = NULL;
        ListNode* third = NULL;
        while(curr != NULL)
        {
            third = curr->next;
            curr->next = prev;
            prev = curr;
            curr = third;
        }
        l1 = prev;
        return l1;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(l1 == NULL && l2 == NULL)
            return l1;
        if(l1 == NULL)
            return l2;
        if(l2 == NULL)
            return l1;
        
        l1 = reverse(l1);
        l2 = reverse(l2);
        ListNode* prev = NULL;
        ListNode* head = NULL;
        int carry =0;
        while(l1!= NULL && l2 != NULL)
        {
            ListNode* newnode = new ListNode();
            newnode->val  = (l1->val + l2->val +carry)%10;
            newnode->next = NULL;
            if((l1->val + l2->val +carry) >= 10)
                carry = 1;
            else
                carry =0;
            if( head == NULL)
            {
                head = newnode;
                prev = head;
            }
            else
            {
                prev->next = newnode;
                prev = newnode;
            }
            l1= l1->next;
            l2 =l2->next;
        }
        
        while(l1 != NULL)
        {
            ListNode* newnode = new ListNode();
            newnode->val = (l1->val + carry)%10;
            newnode->next = NULL;
            if((l1->val + carry)>= 10)
                carry = 1;
            else
                carry =0;
            prev->next = newnode;
            prev = newnode;
            l1 = l1->next;
        }
        while(l2 != NULL)
        {
            ListNode* newnode = new ListNode();
            newnode->val = (l2->val + carry)%10;
            newnode->next = NULL;
            if((l2->val + carry)>= 10)
                carry = 1;
            else
                carry =0;
            prev->next = newnode;
            prev = newnode;
            l2 = l2->next;
        }
        if(carry == 1)
        {
            ListNode* newnode = new ListNode();
            newnode->val = 1;
            newnode->next = NULL;
            prev->next = newnode;
            prev = newnode;
        }
        head = reverse(head);
    
        return head;
        
    }
};