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
        if(!head) return head;
        ListNode* root=head;
        ListNode* iter=head->next;
        while(iter){
            if(root->val==iter->val) iter=iter->next;
            else{
                root->next=iter;
                root=iter;
                iter=iter->next;
            }
        }
        root->next=NULL;
        return head;
    }
};