#include <iostream>
using namespace std;

class ListNode
{
public:
    int val;
    ListNode *next;

    ListNode(int v)
    {
        val = v;
        next = NULL;
    }
};
void printLL(ListNode *head)
{
    ListNode *curr = head;

    while (curr != NULL)
    {
        cout << curr->val << " ";
        curr = curr->next;
    }
}
void deleteAtHead(ListNode *&head)
{
    if (head == NULL)
    {
        return;
    }
    ListNode *temp = head;

    head = head->next;
    temp->next = NULL;
    delete temp;
}

void deletionAtTail(ListNode *&head)
{
    if (head == NULL || head->next == NULL)
    {
        deleteAtHead(head);
        return;
    }

    ListNode *curr = head;

    while (curr->next->next != NULL)
    {
        curr = curr->next;
    }

    ListNode *temp = curr->next;
    curr->next = NULL;

    delete temp;
}

void deletionAtPosition(ListNode *&head, int position)
{
    if(head == NULL){
        return;
    }

    if(position == 0 || head->next == NULL) {
        deleteAtHead(head);
        return;
    }

   
    ListNode *slow = head;
    ListNode *fast = head;

    while (position > 0)
    {
        slow = fast;
        fast = fast->next;
        position--;
    }
    slow->next = fast->next;
    fast->next = NULL;
    delete fast;
}

int main()
{

    ListNode *head = new ListNode(10);
    head->next = new ListNode(20);
    head->next->next = new ListNode(30);
    head->next->next->next = new ListNode(200);
    head->next->next->next->next = new ListNode(300);

    printLL(head);

    cout << endl;

    deletionAtTail(head);

    deletionAtPosition(head, 3);

    printLL(head);
}