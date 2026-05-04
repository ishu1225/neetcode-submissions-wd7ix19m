/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head==nullptr) return nullptr;
        unordered_map<Node*, Node*> m;
        Node* oldhead=head;
        Node* newNode=new Node(oldhead->val);
        Node* newhead=newNode;
        m[oldhead]=newhead;
       
        while(oldhead->next){
             oldhead=oldhead->next;
            Node* copy=new Node(oldhead->val);
            
            newhead->next=copy;
            newhead=newhead->next;
           m[oldhead]=newhead;
            
        }
        oldhead=head;
        newhead=newNode;
        
        while(oldhead!=nullptr){
            newhead->random=m[oldhead->random];
            oldhead=oldhead->next;
            newhead=newhead->next;
            

        }
        return newNode;


        
    }
};