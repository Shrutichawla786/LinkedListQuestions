Q.Check If Circular Linked List
link-->https://www.geeksforgeeks.org/problems/circular-linked-list/1
code->/* Should return true if linked list is circular, else false */
bool isCircular(Node *head)
{
   // Your code here
   if(head==NULL){
       return true;
   }
   Node* temp = head->next;
   while(temp!=head && temp!=NULL){
       temp=temp->next;
   }
   if(temp==head){
       return true;
   }
   else{
       return false;
   }

}
Expected Time Complexity: O(N).
Expected Auxiliary Space: O(1).
