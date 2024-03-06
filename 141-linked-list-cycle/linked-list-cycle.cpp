/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==NULL) return false;
        // Create an unordered set to keep track of visited nodes
        unordered_set<ListNode*>mp;
        // Traverse the linked list
        while(head!=NULL){
            if(mp.count(head)>0) return true; // Check if the current node has been visited before
            mp.insert(head); // Insert the current node into the set
            head=head->next; // Move to the next node in the linked list
        }
        return false; // No cycle
    }
};