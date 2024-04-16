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
// class Solution {
// public:
//     ListNode* deleteMiddle(ListNode* head) {
//         ListNode* curr = head;
//         ListNode* curr2 = head;
//         if(head==NULL || head->next==NULL) return nullptr;
//         if(head->next->next==NULL){
//             head->next=NULL;
//             return head;
//         }
//         while(curr2!=NULL && curr2->next!=NULL){
//             curr2=curr2->next->next;
//             curr = curr->next;
//         }
//         if(curr->next==NULL) delete curr;
//         else{
//         curr->val=curr->next->val;
//         curr->next=curr->next->next;
//         }
//         return head;
//     }
// };
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if (head == nullptr || head->next == nullptr) {
            return nullptr; // No middle node to delete
        }
        
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* prev = nullptr;
        
        while (fast != nullptr && fast->next != nullptr) {
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        
        // At this point, 'slow' points to the middle node
        if (prev != nullptr) {
            prev->next = slow->next; // Delete the middle node
        }
        
        delete slow;
        
        return head;
    }
};
