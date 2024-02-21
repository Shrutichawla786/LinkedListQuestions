Q.Merge K sorted linked lists
link-->https://www.geeksforgeeks.org/problems/merge-k-sorted-linked-lists/1
code-->
  Node * mergeKLists(Node *arr[], int k)
    {
           // Your code here
           vector<int>v;
           for(int i=0;i<k;i++){
               Node * temp =arr[i];
               while(temp!=NULL){
                   v.push_back(temp->data);
                   temp=temp->next;
               }
           }
         sort(v.begin() , v.end());
        Node *dummyhead=new Node(-1);
        Node* dummytemp=dummyhead;
        int i=0;
        while(i<v.size()){
            Node *newnode=new Node(v[i]);
            i++;
            dummytemp->next=newnode;
            dummytemp=newnode;

        }

        return dummyhead->next;
         
    }
Expected Time Complexity: O(nk Logk)
Expected Auxiliary Space: O(k)
