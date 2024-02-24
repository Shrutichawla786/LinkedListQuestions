Q.Merge Sort for Linked List
link-->https://www.geeksforgeeks.org/problems/sort-a-linked-list/1
code--> Node * merge( Node * left , Node* right){
        if(left==NULL){
            return right;
        }
        if(right==NULL){
            return left;
        }
        Node * ans = new Node(NULL);
        Node * temp = ans;
        while(left !=NULL && right!=NULL){
            if(left->data<right->data){
                temp->next= left;
                temp=left;
                left=left->next;
            }
            else{
                temp->next= right;
                temp=right;
                right= right->next;
            }
        }
        while(left!=NULL){
            temp->next= left;
            temp=left;
            left=left->next;
        }
        while(right!=NULL){
            temp->next= right;
            temp=right;
            right= right->next;
        }
        return ans->next;
        
    }
    Node *findMid(Node * head){
        Node * slow=head;
        Node * fast= head->next;
        while(fast!=NULL  && fast->next!=NULL){
            slow= slow->next;
            fast=fast->next->next;
            
        }
        return slow;
    }
    Node* mergeSort(Node* head) {
        // your code here
        if(head==NULL || head->next==NULL){
            return head;
        }
        Node * mid = findMid(head);
        Node * left= head;
        Node * right= mid->next;
        mid->next=NULL;
        left=mergeSort(left);
        right= mergeSort(right);
        
        Node * res= merge(left , right);
        return res;
        
    }
Expected Time Complexity: O(N*Log(N))
Expected Auxiliary Space: O(N)
