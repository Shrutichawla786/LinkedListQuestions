Q.Quick Sort on Linked List
link-->https://www.geeksforgeeks.org/problems/quick-sort-on-linked-list/1
code-->node * findPivot(node * head , node * tail){
    node * pivot = head;
    node * curr= head->next;
    node * prev = head;
    while(curr!=tail->next){
        if(pivot->data>curr->data){
            swap(prev->next->data , curr->data);
            prev=prev->next;
        }
        curr=curr->next;
    }
    swap(prev->data , pivot->data);
    return prev;
}
void solve(node * head , node * tail){
    if(head==NULL ||tail==NULL || tail==head){
        return ;
    }
    node * pivot= findPivot(head , tail);
    solve(head ,pivot);
    solve(pivot->next , tail);
}
node * getTail(node * head){
    node * temp = head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    return temp;
}
void quickSort(struct node **headRef) {
    node * head= * headRef;
    if(head==NULL || head->next==NULL){
        return ;
    }
    node * tail = getTail(head);
    solve(head , tail);

    
}

which takes O(n^2) time in worst case and O(nLogn) in average and best cases
