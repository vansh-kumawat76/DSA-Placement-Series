#include<iostream>
using namespace std;

//make a linkList
class ListNode {
    public:
    int val; // it's the value of the node
    ListNode *next;  // it's the address of the next node

    ListNode(int v){
        val = v;
        next = NULL;
    }
};
int main(){
ListNode *head = new ListNode(100);
   head->next = new ListNode(90);
   head->next->next = new ListNode(40);
   head->next->next = new ListNode(50);
   head->next->next->next = new ListNode(101);

   cout<<head->val<<" ";
   cout<<head->next->val<<" ";
   cout<<head->next->next-> val<<" ";
}