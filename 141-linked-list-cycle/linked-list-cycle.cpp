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
        // if(head==NULL) return false;
        // // Create an unordered set to keep track of visited nodes
        // unordered_set<ListNode*>mp;
        // // Traverse the linked list
        // while(head!=NULL){
        //     if(mp.count(head)>0) return true; // Check if the current node has been visited before
        //     mp.insert(head); // Insert the current node into the set
        //     head=head->next; // Move to the next node in the linked list
        // }
        // return false; // No cycle
        ListNode* p1 = head; // Initialize slow pointer (tortoise) to the head of the linked list
        ListNode* p2 = head; // Initialize fast pointer (hare) to the head of the linked list
        while(p2!=NULL && p2->next!=NULL){ // Traverse the linked list using two pointers
            p1=p1->next; // Move slow pointer one step at a time
            p2=p2->next->next; // Move fast pointer two steps at a time
            if(p1==p2) return true; // Check if the pointers meet, indicating the presence of a cycle
        }
        return false; // If the loop completes without meeting, there is no cycle
    }
};