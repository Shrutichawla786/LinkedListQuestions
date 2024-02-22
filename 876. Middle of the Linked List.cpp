Q.876. Middle of the Linked List
link-->https://leetcode.com/problems/middle-of-the-linked-list/description/
code->ListNode* middleNode(ListNode* head) {
        int count=0;
        ListNode * curr=head;
        while(curr){
            count++;
            curr=curr->next;

        }
        curr=head;
        int n = count/2;
        int i=0;
        while(i<n){
            curr=curr->next;
            i++;
        }
        return curr;
    }
