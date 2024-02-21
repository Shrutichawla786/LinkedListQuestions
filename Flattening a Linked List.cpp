Q.Flattening a Linked List
link-->https://www.geeksforgeeks.org/problems/flattening-a-linked-list/1
code->Node *flatten(Node *root)
{
   // Your code here
    vector<int>v;
    Node *mainnode= root;
    while(mainnode){
       Node *subnode=mainnode;
       while(subnode){
           v.push_back(subnode->data);
           subnode=subnode->bottom;
       }
       mainnode=mainnode->next;
   }
        sort(v.begin() , v.end());
        
        Node * dummyHead= new Node(-1);
        Node * dummyNode = dummyHead;
        int i=0;
        while(i<v.size()){
            Node * newNode = new Node(v[i]);
            i++;
            dummyNode->bottom=newNode;
            dummyNode= newNode;
        }
        
        return dummyHead->bottom;
        
   
}
Expected Time Complexity: O(N*log n)
Expected Auxiliary Space: O(N)
