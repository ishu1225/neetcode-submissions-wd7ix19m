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
        ListNode* prev=NULL;
        while(head){
            ListNode* next=head->next;
            head->next=prev;
            prev=head;
            head=next;
        }
        return prev;
    }
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(!head||left==right) return head;
        int count=1;
        ListNode* l=NULL;
        ListNode* r=NULL;
        ListNode* prev=NULL;
        ListNode* next=NULL;
        ListNode* curr=head;
        while(curr){
            if(count==left-1) prev=curr;
            else if(count==left) l=curr;
            else if(count==right) {
                r=curr;
                break;
                }
            curr=curr->next;
            count++;

        }
        if(r->next)next=r->next;
        r->next=nullptr;
       if(prev) prev->next=nullptr;
        ListNode* newHead=reverse(l);
        if(prev)prev->next= newHead;
        else head=newHead;
        l->next=next;
        return head;
        
        
    }
};