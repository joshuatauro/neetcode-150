#include<bits/stdc++>
using namespace std;

class ListNode{
    public:
        int value;
        ListNode* next;

        ListNode(int value){
            this->value = value;
        }
}

ListNode* reverseList(ListNode* head){
            if(head == NULL) return head;
    ListNode* temp = head;
    ListNode* prevNode=NULL;
    while(temp != NULL){
        nextNode=temp->next;
        temp->next = prevNode;
        prevNode=temp;
        temp=nextNode;
    }
    // temp->next=prevNode;
    return prevNode;
    }

int main() {

    return 0;
}