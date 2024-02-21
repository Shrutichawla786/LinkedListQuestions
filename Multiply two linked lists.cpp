Q.Multiply two linked lists
link-->https://www.geeksforgeeks.org/problems/multiply-two-linked-lists/1
code->long long  multiplyTwoLists (Node* l1, Node* l2)
{
  //Your code here
  long long mod=1000000007;
  long long num1=0;
  long long num2=0;
  while(l1){
          num1=(num1*10)%mod+(l1->data)%mod;
          l1=l1->next;
      }
    while(l2){
          num2=(num2*10)%mod+(l2->data)%mod;
          l2=l2->next;
      }
      
  return (num1*num2)%mod;
}
Time ->O(len(L1)+len(L2));
Space->O(1)
