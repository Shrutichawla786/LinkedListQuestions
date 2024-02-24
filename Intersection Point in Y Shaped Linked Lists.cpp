Q.Intersection Point in Y Shaped Linked Lists
link-->https://www.geeksforgeeks.org/problems/intersection-point-in-y-shapped-linked-lists/1
code-->int intersectPoint(Node* head1, Node* head2)
{
    // Your Code Here
    unordered_set<Node*> mp;
    while(head1!=NULL){
        mp.insert(head1);
        head1=head1->next;
    }
    while(head2!=NULL){
        if(mp.find(head2)!= mp.end()){
            return head2->data;
        }
        head2=head2->next;
    }
    return -1;
}
Expected Time Complexity: O(N+M)
Expected Auxiliary Space: O(N)

 
