link-->https://www.geeksforgeeks.org/problems/remove-duplicate-element-from-sorted-linked-list/1
Q.Remove duplicate element from sorted Linked List
code-->
  
Node *removeDuplicates(Node *head)
{
 // your code goes her
    Node * temp = head;
    while(temp!=NULL && temp->next!=NULL){
        if(temp->data !=temp->next->data){
            temp = temp->next;
        }
        else{
            Node * p = temp->next;
            temp->next =p->next;
            p->next=NULL;
            delete(p);
        }
    }
    return head;
}
Expected Time Complexity : O(N)
Expected Auxilliary Space : O(1)
