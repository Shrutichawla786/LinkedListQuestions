Q.Given a linked list of 0s, 1s and 2s, sort it.
Link-->https://www.geeksforgeeks.org/problems/given-a-linked-list-of-0s-1s-and-2s-sort-it/1
code-->    Node* segregate(Node *head) {
        
        // Add code here
        vector<int>v;
        while(head){
            v.push_back(head->data);
            head=head->next;
        }
        sort(v.begin() , v.end());
        
        Node * dummyHead= new Node(-1);
        Node * dummyNode = dummyHead;
        int i=0;
        while(i<v.size()){
            Node * newNode = new Node(v[i]);
            i++;
            dummyNode->next=newNode;
            dummyNode= newNode;
        }
        return dummyHead->next;
        
    }
Expected Time Complexity: O(N log N).
Expected Auxiliary Space: O(N).
