Q.Intersection of two sorted Linked lists
link-->https://www.geeksforgeeks.org/problems/intersection-of-two-sorted-linked-lists/1
code-->Node* findIntersection(Node* head1, Node* head2)
    {
        // code goes here.
        Node * newNode= new Node(NULL);
        Node * temp1= head1;
        Node * temp2=head2;
        Node * head= newNode;
        while(temp1 !=NULL && temp2!=NULL){
            if(temp1->data== temp2->data){
                newNode->next= new Node(temp1->data);
                newNode= newNode->next;
                temp1=temp1->next;
                temp2=temp2->next;
            }
            else if(temp1->data<temp2->data){
                temp1=temp1->next;
            }
            else{
                temp2=temp2->next;
            }
        }
        return head->next;
    }
Expected Time Complexity : O(n+m)
Expected Auxilliary Space : O(n+m)
