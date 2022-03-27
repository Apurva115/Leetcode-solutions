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
    ListNode* reverseBetween(ListNode* head, int l, int r) {
        
        if(head == NULL)
            return head;
        ListNode* right = head;
        ListNode* left = head;
        ListNode* prev = NULL;
        for(int i=0;i<l-1; i++)
        {
            prev = left;
            left = left->next;
        }
        ListNode* temp = prev; //con
        for(int i=0;i<r-1; i++)
        {
            right = right->next;
        }
        ListNode* curr = left; //tail
        ListNode* third = NULL;
        
        while(r-l+1 >0)
        {
            third = curr->next;
            curr->next = prev;
            prev = curr;
            curr = third;
            l++;
            
        }
        if(temp != NULL)
        {
            temp->next = prev;
        }
        else
        {
            head = prev;
        }
        left->next = curr;
        return head;
        
        
        
        
    }
};
        
        
        
        
        
        
        
        
        