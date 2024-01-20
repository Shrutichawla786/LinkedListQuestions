link-->https://www.geeksforgeeks.org/problems/nth-node-from-end-of-linked-list/1
Q.Nth node from end of linked list
Code-->int getNthFromLast(Node *head, int n)
    {
           // Your code here
           Node * temp = head;
           int count=1;
           while(temp!=NULL){
               temp=temp->next;
               count++;
           }
           if(n>=count){
               return -1;
           }
           int c= count-n;
           Node * t= head;
           int i=1;
           while(i!=c){
               t=t->next;
               i++;
           }
           return t->data;
    }

  Expected Time Complexity: O(N).
Expected Auxiliary Space: O(1).
    
