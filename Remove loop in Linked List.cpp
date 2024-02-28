Q.Remove loop in Linked List
link-->https://www.geeksforgeeks.org/problems/remove-loop-in-linked-list/1
code-->    Node * DetectLoop(Node * head){
        if(head==NULL){
            return NULL;
        }
        
        Node * slow= head;
        Node* fast= head;
        
        while(fast!=NULL && fast->next!=NULL && slow!=NULL){
            fast=fast->next->next;
            slow=slow->next;
            if(slow==fast){
                return slow;
            }
        }
        return NULL;
        
    }
    Node * StartingNode(Node * head){
        if(head==NULL){
            return NULL;
        }
        Node * fast= DetectLoop(head);
        if(fast==NULL){
            return NULL;
        }
        Node * slow= head;
        while(slow!=fast){
            slow=slow->next;
            fast=fast->next;
        }
        return slow;
    }
    void removeLoop(Node* head)
    {
        // code here
        // just remove the loop without losing any nodes
        
        if(head==NULL){
            return;
        }
        Node * start=StartingNode(head);
        if(start==NULL){
            return;
        }
        Node * temp = start;
        while(temp->next!=start){
            temp=temp->next;
        }
        temp->next=NULL;
    }

Expected time complexity: O(N)
Expected auxiliary space: O(1)
