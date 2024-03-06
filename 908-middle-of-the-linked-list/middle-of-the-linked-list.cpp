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
    ListNode* middleNode(ListNode* head) {
        // Initialize two pointers, n1 and n2, both starting at the head of the linked list
        ListNode* n1 = head;
        ListNode* n2 = head;
        // Traverse the linked list using two pointers
        while(n2!=NULL && n2->next!=NULL){
            n1 = n1->next; // Move n1 one step at a time
            n2 = n2->next->next; // Move n2 two steps at a time
        }
        return n1;
    }
};