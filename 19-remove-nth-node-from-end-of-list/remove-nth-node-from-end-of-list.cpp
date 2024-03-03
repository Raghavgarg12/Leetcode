// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */
// class Solution {
// public:
//     void del(ListNode* &curr, ListNode* &head){
//         if(curr==NULL) return;
//         if(curr==head) head=nullptr;
//         else if(curr->next==nullptr) curr=nullptr;
//         else{
//             curr->val=curr->next->val;
//             curr->next=curr->next->next;
//         }
//     }
//     ListNode* removeNthFromEnd(ListNode* head, int n) {
//         int count=1;
//         ListNode* curr=head;
//         ListNode* nex=head;
//         while(nex->next!=NULL){
//             nex=nex->next;
//             count++;
//             if(count>n) {
//                 curr=curr->next;
//                 count--;
//             }
//         }
//         cout<<curr->val;
//         del(curr,head);
//         return head;
//     }
// };
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* first = dummy;
        ListNode* second = dummy;

        for (int i = 0; i <= n; ++i) {
            first = first->next;
        }

        while (first != nullptr) {
            first = first->next;
            second = second->next;
        }

        ListNode* temp = second->next;
        second->next = second->next->next;
        delete temp;

        return dummy->next;
    }
};