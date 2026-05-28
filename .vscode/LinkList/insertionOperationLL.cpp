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
void insertAtHead(ListNode *&head, int key)
{
    // create a new node
    ListNode *newNode = new ListNode(key);

    // Link newNode to head
    newNode->next = head;

    // update the head
    head = newNode;
}

void insertAtTail(ListNode *&head, int key)
{
    if (head == NULL)
    {
        // our LL is Empty
        insertAtHead(head, key);
        return;
    }

    // create a new node
    ListNode *newNode = new ListNode(key);

    ListNode *curr = head;

    while (curr->next != NULL)
    {
        curr = curr->next;
    }
    curr->next = newNode;
}

void insertionAtPosition(ListNode *&head, int key, int position)
{
    if (position == 0)
    {
        insertAtHead(head, key);
        return;
    }
    
    ListNode *curr = head;

    while (position > 1)
    {
        curr = curr->next;
        position--;
    }

    ListNode *temp = curr->next;
    ListNode *newNode = new ListNode(key);

    curr->next = newNode;
    newNode->next = temp;
}

int main()
{
    ListNode *head = NULL;

    insertAtHead(head, 50);

    insertAtHead(head, 60);

    insertAtHead(head, 70);

    insertAtHead(head, 80);

    insertAtTail(head, 100);

    insertAtTail(head, 999);

    insertAtTail(head, 101);

    insertAtTail(head, 998);

    printLL(head);

    cout << endl;

    insertionAtPosition(head, 88, 3);

    printLL(head);
}