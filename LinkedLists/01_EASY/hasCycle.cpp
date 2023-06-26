#include<iostream>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *slow, *fast;
        if(!head) return false;
        if(!head->next) return false;
        slow=head;
        fast=head->next;
        while(slow != NULL && fast!=NULL){
            if(slow == fast){
                return true;
            }
            slow=slow->next;
            fast=fast->next;
            if(fast != NULL){
                fast=fast->next;
            }
        } 
        return false;
    }
};