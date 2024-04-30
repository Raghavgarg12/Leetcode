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
    ListNode* deleteDuplicates(ListNode* head) {
        // APPROACH 1
        // if(!head) return head;
        // ListNode* root=head;
        // ListNode* iter=head->next;
        // while(iter){
        //     if(root->val==iter->val) iter=iter->next;
        //     else{
        //         root->next=iter;
        //         root=iter;
        //         iter=iter->next;
        //     }
        // }
        // root->next=NULL;
        // APPROACH 2
        ListNode* curr=head;
        while(curr!=NULL&&curr->next!=NULL){
            if(curr->val==curr->next->val){
                curr->next=curr->next->next;
            }
            else{
                curr=curr->next;
            }
        }
        return head;
    }
};