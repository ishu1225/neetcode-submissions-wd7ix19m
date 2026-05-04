/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* reverse(ListNode* head){
        ListNode*curr=head;
        ListNode* prev=NULL;
        while(curr){
            ListNode* next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }
   ListNode* removeNthFromEnd(ListNode* head, int n) {
    ListNode* newhead = reverse(head);

    // delete first node case
    if (n == 1) {
        ListNode* temp = newhead;
        newhead = newhead->next;
        delete temp;
        return reverse(newhead);
    }

    int count = 1;
    ListNode* curr = newhead;

    while (count < n - 1 && curr->next) {
        curr = curr->next;
        count++;
    }

    if (curr->next) {
        ListNode* temp = curr->next;
        curr->next = temp->next;
        delete temp;
    }

    return reverse(newhead);
}
};
