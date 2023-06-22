#include<bits/stdc++.h>
class Solution {
public:
        ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *temp1, *temp2;
        temp1=list1;
        temp2=list2;
        ListNode* head3 = new ListNode();
        ListNode *temp3 = head3; 
        while(temp1 != NULL && temp2 != NULL){
            if(temp1->val <= temp2->val){
                temp3->next = new ListNode(temp1->val);
                temp3=temp3->next;
                temp1=temp1->next;
            }else if(temp2->val < temp1->val){
                temp3->next = new ListNode(temp2->val);
                temp3=temp3->next;
                temp2=temp2->next;
            }
        }

        while(temp1!=NULL){
            temp3->next = new ListNode(temp1->val);
            temp3=temp3->next;
            temp1=temp1->next;
        }
        while(temp2!=NULL){
            temp3->next = new ListNode(temp2->val);
            temp2=temp2->next;
            temp3=temp3->next;
        }
        return head3->next;
    }
};