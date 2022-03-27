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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(l1 == NULL && l2 == NULL)
            return l1;
        if(l1 == NULL)
            return l2;
        if(l2 == NULL)
            return l1;
        int carry =0;
        ListNode* head1 = NULL;
        ListNode* temp = new ListNode();
        temp->val = (l1->val+ l2->val+ carry)%10;
        if((l1->val+ l2->val + carry) >= 10)
            carry = 1;
        else
            carry = 0;
        temp->next = NULL;
        head1 = temp;
        l1 = l1->next;
        l2 = l2->next;
        
        ListNode* prev = head1;
        while(l1 !=NULL && l2 !=NULL)
        {
            
            
            ListNode* newnode = new ListNode();
            newnode->val = (l1->val+ l2->val +carry)%10;
            newnode->next = NULL;
            if(( l1->val+ l2->val+ carry) >= 10)
                carry =1;
            else
                carry = 0;
            prev->next = newnode;
            l1 = l1->next;
            l2 = l2->next;
            prev = newnode;
        }
        while(l1 != NULL)
        {
            ListNode* newnode = new ListNode();
            newnode->val = (carry + l1->val)%10;
            if(carry + l1->val >= 10)
                carry = 1;
            else
                carry = 0;
                
            newnode->next = NULL;
            prev->next = newnode;
            prev = newnode;
            l1 = l1->next;
            
            
        }
        while(l2 != NULL)
        {
            ListNode* newnode = new ListNode();
            newnode->val = (carry + l2->val)%10;
            if(carry + l2->val >= 10)
                carry = 1;
            else
                carry = 0;
                
            newnode->next = NULL;
            prev->next = newnode;
            prev = newnode;
            l2 = l2->next;
            
            
        }
        if(carry == 1)
        {
            ListNode* newnode1 = new ListNode();
            newnode1->val = 1;
            newnode1->next = NULL;
            prev->next = newnode1;
        }
        return head1;
        
        
    }
};