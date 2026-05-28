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
int findLength(ListNode *head)
{

    ListNode *curr = head;
    int length = 0;

    while (curr != NULL)
    {

        length++;
        curr = curr->next;
    }
    return length;
}
int main()
{
    ListNode *head = new ListNode(10);
    head->next = new ListNode(20);
    head->next->next = new ListNode(30);
    head->next->next->next = new ListNode(40);
    head->next->next->next->next = new ListNode(50);
    printLL(head);

    cout << endl;

    cout << "LL length is :" << findLength(head);
}