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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* curr = head;
        ListNode* curr2 = head;
        if(head==NULL || head->next==NULL) return nullptr;
        if(head->next->next==NULL){
            head->next=NULL;
            return head;
        }
        while(curr2!=NULL && curr2->next!=NULL){
            curr2=curr2->next->next;
            curr = curr->next;
        }
        if(curr->next==NULL) delete curr;
        else{
        curr->val=curr->next->val;
        curr->next=curr->next->next;
        }
        return head;
    }
};