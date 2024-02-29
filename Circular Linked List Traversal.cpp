Q.Circular Linked List Traversal
link-->https://www.geeksforgeeks.org/problems/circular-linked-list-traversal/1
code->void printList(struct Node *head)
{
  // code here
  Node * temp=head->next;
  cout<<head->data<<" ";
  while(temp!=head){
      cout<<temp->data<<" ";
      temp=temp->next;
  }
  
}
