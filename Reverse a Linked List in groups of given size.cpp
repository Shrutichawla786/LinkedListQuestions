link-->https://www.geeksforgeeks.org/problems/reverse-a-linked-list-in-groups-of-given-size/1
Q.Reverse a Linked List in groups of given size
code-->
  

    struct node *reverseIt (struct node *head, int k)
    { 
        // Complete this method
        if(head==NULL){
            return NULL;
        }
        node * curr=head;
        node * prev = NULL;
        node * forward= NULL;
        int count=0;
        while(curr!=NULL && count<k){
            forward= curr->next;
            curr->next = prev ;
            prev = curr;
            curr=forward;
            count++;
        }
        if(forward!=NULL){
          head->next=  reverseIt(forward , k);
        }
        return prev;
    }
Expected Time Complexity : O(N)
Expected Auxilliary Space : O(1)
