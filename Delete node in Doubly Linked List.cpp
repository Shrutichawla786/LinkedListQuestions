Q.Delete node in Doubly Linked List
link-->https://www.geeksforgeeks.org/problems/delete-node-in-doubly-linked-list/1
code-->    Node* deleteNode(Node *head, int x)
    {
      //Your code here
      if(head==NULL){
          return NULL;
      }
      if(x==1){
          Node * temp = head;
          head=head->next;
          delete temp;
          return head;
      }
      int count=1;
      Node* curr =head;
      Node* prev1=NULL;
      while(count<x && curr->next!=NULL){
          prev1=curr;
          curr=curr->next;
          count++;
      }
      prev1->next= curr->next;
      curr->prev=NULL;
      curr->next==NULL;
      return head;
      
      
    }
Expected Time Complexity : O(n)
Expected Auxilliary Space : O(1)
