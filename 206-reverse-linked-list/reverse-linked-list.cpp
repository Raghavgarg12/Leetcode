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
    ListNode* reverseList(ListNode* head) {
        if(head==NULL) return head;
        ListNode* temp1 = head->next;
        ListNode* temp2;
        head->next=NULL;
        while(temp1!=NULL){
            temp2=temp1->next;
            temp1->next=head;
            head=temp1;
            temp1=temp2;
        }
        return head;
    }
};