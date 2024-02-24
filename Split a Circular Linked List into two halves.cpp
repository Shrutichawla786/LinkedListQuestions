Q.Split a Circular Linked List into two halves
link->https://www.geeksforgeeks.org/problems/split-a-circular-linked-list-into-two-halves/1
code->void splitList(Node *head, Node **head1_ref, Node **head2_ref)
{
    // your code goes here
    Node * slow= head;
    Node * fast= head->next;
    while(fast!=head && fast->next!=head){
        fast=fast->next->next;
        slow=slow->next;
    }
    *head2_ref= slow->next;
    *head1_ref=head;
    slow->next=*head1_ref ;
    Node * curr= *head2_ref;
    while(curr->next!=head){
        curr=curr->next;
    }
    curr->next= *head2_ref;
    
}

Expected Time Complexity: O(N)
Expected Auxilliary Space: O(1)
