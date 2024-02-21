Q.Delete nodes having greater value on right
link-->https://www.geeksforgeeks.org/problems/delete-nodes-having-greater-value-on-right/1
code-->Node *compute(Node *head)
    {
        // your code goes here
        Node *temp=head;
        while(temp->next!=NULL){
            if(temp->next->data>temp->data){
                temp->data=temp->next->data;
                temp->next=temp->next->next;
                temp=head;
            }
            else{
                temp=temp->next;
            }
        }
        return head;
    }
Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)
