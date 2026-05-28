class Solution { //leetcode
public:

    void deleteAtHead(ListNode *&head)
    {
        if(head == NULL) return;

        ListNode* temp = head;
        head = head->next;

        temp->next = NULL;
        delete temp;
    }

    ListNode* removeNthFromEnd(ListNode* head, int n) {

        if(head == NULL) return NULL;

        ListNode* fast = head;
        ListNode* slow = head;
        ListNode* prev = NULL;

        // Move fast n steps ahead
        for(int i = 0; i < n; i++) {
            fast = fast->next;
        }

        // If fast becomes NULL,
        // remove head node
        if(fast == NULL) {
            deleteAtHead(head);
            return head;
        }

        // Move both pointers
        while(fast != NULL) {
            prev = slow;
            slow = slow->next;
            fast = fast->next;
        }

        // Delete nth node from end
        prev->next = slow->next;
        slow->next = NULL;

        delete slow;

        return head;
    }
};