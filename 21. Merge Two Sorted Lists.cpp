Q.21. Merge Two Sorted Lists
link-->https://leetcode.com/problems/merge-two-sorted-lists/description/
code-->ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode * ans = new ListNode(-1);
        ListNode * temp= ans;
        while(list1!=nullptr && list2!=nullptr){
            if(list1->val <list2->val){
                temp->next= list1;
                temp=list1;
                list1=list1->next;
            }
            else{
                temp->next= list2;
                temp=list2;
                list2=list2->next;
            }
        }
        while(list1!=nullptr){
            temp->next= list1;
            temp=list1;
            list1=list1->next;
        }
        while(list2!=nullptr){
            temp->next= list2;
            temp=list2;
            list2=list2->next;
        }
        return ans->next;
    }
