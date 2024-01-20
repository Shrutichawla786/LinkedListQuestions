Link-->https://www.geeksforgeeks.org/problems/reverse-a-linked-list/1
Q.Reverse a linked list
code-->
  
struct Node * reverse(Node * curr , Node * prev ){
        if(curr==NULL){
            return prev;
        }
        Node * forward= curr->next;
        curr->next=prev;
        reverse(forward , curr);
    }
    struct Node* reverseList(struct Node *head)
    { 
        // code here
        // return head of reversed list
        
        Node* prev = NULL;
        Node * curr=head;
        return reverse( curr , prev);
    }
Expected Time Complexity: O(N).
Expected Auxiliary Space: O(1).
