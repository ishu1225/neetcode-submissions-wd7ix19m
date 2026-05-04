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
    void reorderList(ListNode* head) {
        ListNode* fast=head;
        ListNode* slow=head;
        while(fast&&fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* sec=slow->next;
        slow->next=NULL;
        ListNode* prev=NULL;

        while(sec){
            ListNode* next=sec->next;
            sec->next=prev;
            prev=sec;
            sec=next;
        }

        ListNode* first=head;
        ListNode* second=prev;
        bool booli=true;
        while(first&& second){
            if(booli){
                booli=false;
                ListNode* next=first->next;
                first->next=second;
                first=next;
            }
            else{
                booli=true;
                ListNode* next=second->next;
                second->next=first;
                second=next;
            }
        }
        
    }
};
