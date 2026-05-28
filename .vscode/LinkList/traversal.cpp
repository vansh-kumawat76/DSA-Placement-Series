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
int main()
{
    ListNode *head = new ListNode(5);
    head->next = new ListNode(10);
    head->next->next = new ListNode(15);
    head->next->next->next = new ListNode(-10);

    printLL(head);
}