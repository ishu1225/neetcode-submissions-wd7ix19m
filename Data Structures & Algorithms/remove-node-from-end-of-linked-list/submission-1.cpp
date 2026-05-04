class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode dummy(0);
        dummy.next = head;

        ListNode* slow = &dummy;
        ListNode* fast = &dummy;

        // Step 1: move fast n steps
        for (int i = 0; i < n; i++) {
            fast = fast->next;
        }

        // Step 2: move both
        while (fast->next) {
            slow = slow->next;
            fast = fast->next;
        }

        // Step 3: delete node
        ListNode* temp = slow->next;
        slow->next = temp->next;
        delete temp;

        return dummy.next;
    }
};