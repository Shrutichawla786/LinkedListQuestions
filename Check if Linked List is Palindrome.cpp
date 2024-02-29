Q.Check if Linked List is Palindrome
link-->https://www.geeksforgeeks.org/problems/check-if-linked-list-is-pallindrome/1
code-->  Node* reverse(Node* &head){
      Node* curr=head;
      Node* pre=NULL;
      while(curr!=NULL){
         Node* nextNode=curr->next;
         curr->next=pre;
         pre=curr;
         curr=nextNode;
      }
      return pre;
  }
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        //Your code here
        int num1=0;
        Node* temp=head;
        while(temp!=NULL){
            num1=num1*10+temp->data;
            temp=temp->next;
        }
        Node * head2= reverse(head);
        int num2=0;
        Node* temp2=head2;
        while(temp2!=NULL){
            num2=num2*10+temp2->data;
            temp2=temp2->next;
        }
        if(num1==num2){
            return true;
        }
        else{
            return false;
        }
    }
Expected Time Complexity: O(N)
Expected Auxialliary Space Usage: O(1
