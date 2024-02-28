Q.Find the first node of loop in linked list
link-->https://www.geeksforgeeks.org/problems/find-the-first-node-of-loop-in-linked-list--170645/1
code-->     Node * DetectLoop(Node* head){
         if(head==NULL){
             return NULL;
         }
         
         Node * fast = head;
         Node* slow= head;
         
         while(slow!=NULL && fast!=NULL && fast ->next !=NULL){
             slow=slow->next;
             fast=fast->next->next;
             if(slow==fast){
                 return slow;
             }
         }
         return NULL;
         
         
     }
     Node * StartingLoop(Node * head){
         if(head==NULL){
             return NULL;
         }
         Node * fast= DetectLoop(head);
         
         if(fast==NULL){
             return NULL;
         }
         
         Node* slow= head;
         while(slow!=fast){
             fast=fast->next;
             slow=slow->next;
             
         }
         return slow;
     }
    int findFirstNode(Node* head)
    {
        // your code here
        if(head==NULL){
            return -1;
        }
        Node * start= StartingLoop(head);
        if(start==NULL){
            return -1;
        }
        return start->data;
    }
Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)
