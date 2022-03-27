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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *merge;
        if(l1 == NULL && l2 == NULL)
            return l1;
        if(l1==NULL)
        {
            return l2;
        }
        if(l2==NULL)
        {
            return l1;
        }
        ListNode* head = NULL;
        ListNode* prev = NULL;
        while(l1!= NULL && l2 != NULL)
        {
            ListNode* newnode = new ListNode();
            
            newnode->next = NULL;
            if(l1->val <= l2->val)
            {
                newnode->val = l1->val;
                l1 = l1->next;
                
            }
            else 
            {
                newnode->val = l2->val;
                l2 = l2->next;
            }
            if(head == NULL)
            {
                head = newnode;
                prev = head;
        
            }
            else
            {
                prev->next = newnode;
                prev = newnode;
                
            }
            
            
        }
        while(l1 != NULL)
        {
            ListNode* newnode = new ListNode();
            newnode->val = l1->val;
            newnode->next = NULL;
            prev->next = newnode;
            prev = newnode;
            l1 = l1->next;
            
        }
        while(l2 != NULL)
        {
            ListNode* newnode = new ListNode();
            newnode->val = l2->val;
            newnode->next = NULL;
            prev->next = newnode;
            prev = newnode;
            l2 = l2->next;
            
        }
        return head;
        

        
    }
};