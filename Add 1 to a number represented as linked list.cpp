Q.Add 1 to a number represented as linked list
link-->https://www.geeksforgeeks.org/problems/add-1-to-a-number-represented-as-linked-list/1
code--> Node*reverse(Node*root)
    {
        Node*temp=root;
        Node*prev=NULL;
        Node*cur=root;
        while(cur)
        {
            Node*nexti=cur->next;
            cur->next=prev;
            prev=cur;
            cur=nexti;
        }
        return prev;
    }
    Node* addOne(Node *head) 
    {
        // Your Code here
        // return head of list after adding one
        head= reverse(head);
        Node* temp = head;
        int carry=1;
        while(temp!=NULL){
            temp->data=temp->data+1;
            if(temp->data<10){
                carry=0;
                break;
            }
            else{
                temp->data=0;
                carry=1;
            }
            temp=temp->next;
        }
        if(carry==1){
            head=reverse(head);
            Node * newNode= new Node(carry);
            newNode->next= head;
            return newNode;
        }
        else{
            head=reverse(head);
            return head;
            
        }
        
    }

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(1).
