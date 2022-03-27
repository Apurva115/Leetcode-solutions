/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    Node* flatten(Node* head) {
        Node* Prev = NULL;
        Node* Next = NULL;
        Node* temp = head;
        while(temp != NULL)
        {
            
            if(temp->child !=NULL)
            {
                Prev = temp;
                Next = temp->next;
                Node* curr = temp->child;
                while(curr->next != NULL)
                {
                    curr = curr->next;
                }
                curr->next = Next;
                if( Next != NULL)
                    Next->prev = curr;
                
                
                Prev->next = temp->child;
                temp->child->prev = Prev;
                temp->child = NULL;
                
            }
            temp= temp->next;
        }
        return head;
        
    }
};