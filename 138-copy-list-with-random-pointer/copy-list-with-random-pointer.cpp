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
        if(!head) return head;
        Node* root = new Node(head->val);
        Node* start = root;
        Node* temp = head->next;
        unordered_map<Node*,Node*>mp;
        mp[head]=root;
        while(temp){
            root->next = new Node(temp->val);
            root = root->next;
            mp[temp]=root;
            temp = temp->next;
        }
        temp=head;
        root=start;
        while(temp){
            root->random=mp[temp->random];
            root = root->next;
            temp = temp->next;
        }
        return start;
    }
};