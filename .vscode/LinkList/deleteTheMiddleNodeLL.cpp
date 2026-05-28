#include<iostream>
using namespace std;

class ListNode{
    public:
    int val;
    ListNode* next;

    ListNode(int x){
        val = x;
        next = NULL;
    }
};

ListNode* middle(ListNode* head){

    ListNode* prev = NULL;
    ListNode* slow = head;
    ListNode* fast = head;

    while(fast!=NULL && fast->next !=NULL){
        prev = slow;
        slow = slow->next;
        fast = fast->next->next;
    }

    prev->next = slow->next;
    delete slow;

    return head;
}

void printLL(ListNode *head)
{
    ListNode *curr = head;

    while (curr != NULL)
    {
        cout << curr->val << " ";
        curr = curr->next;
    }
}

int main(){

    ListNode* head = new ListNode(10);
    head->next = new ListNode(20);
    head->next->next = new ListNode(30);
    head->next->next->next = new ListNode(40);

    head = middle(head);

    printLL(head);
}