#include<bits/stdc++.h>
class Solution {
public:
    ListNode* appendToList(ListNode* head, int val){
        ListNode *newnode = new ListNode(val);
        if(head == NULL) return newnode;
        ListNode* curr = head;
        while(curr->next!=NULL){
            curr = curr->next;
        }
        curr->next = newnode;
        return head;
    }
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* list3;
        if(list1 == NULL) return list2;
        if(list2 == NULL) return list1;
        while(list1 != NULL && list2 != NULL){
            if(list1->val < list2->val){
                list3=appendToList(list3, list1->val);
                list1=list1->next;
            }else if(list2->val < list1->val){
                list3=appendToList(list3, list2->val);
                list2=list2->next;
            }else{
                list3=appendToList(list3, list1->val);
                list1=list1->next;
            }
        }
        while(list1 != NULL){
            list3=appendToList(list3, list1->val);
            list1=list1->next;
        }
        while(list2 != NULL){
            list3=appendToList(list3, list2->val);
            list2=list2->next;
        }
        return list3;
    }
};