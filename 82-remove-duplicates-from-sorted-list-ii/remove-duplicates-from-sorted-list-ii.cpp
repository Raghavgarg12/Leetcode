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
        if(!head || !head->next) return head;
        ListNode* start = new ListNode();
        ListNode* root =start;
        ListNode* iter = head;
        while(iter!=NULL){
            if(iter->next && iter->val==iter->next->val){
                while(iter->val == iter->next->val){
                    iter=iter->next;
                    if(!iter->next){
                        root->next=NULL;
                        return start->next;
                    }
                }
                iter=iter->next;
                continue;
            }
            root->next=iter;
            root=iter;
            iter=iter->next;
        }
        return start->next;
    }
};