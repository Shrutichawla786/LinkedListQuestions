link-->https://www.geeksforgeeks.org/problems/move-last-element-to-front-of-a-linked-list/1
Q.Move Last Element to Front of a Linked List
code->ListNode *moveToFront(ListNode *head){
        if(head == NULL || head->next==NULL){
            return head;
        }
        ListNode * temp1=head;
        ListNode * temp2=head;
        int count=0;
        while(temp1->next!=NULL){
            temp1=temp1->next;
            count++;
        }
        while(count!=1){
            temp2=temp2->next;
            count--;
        }
        temp2->next=NULL;
        temp1->next=head;
        
        
    }
Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)

 
  
