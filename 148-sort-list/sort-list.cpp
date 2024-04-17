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
    ListNode* sortList(ListNode* head) {
        vector<int> num;
        ListNode* root = head;
        while(root){
            num.push_back(root->val);
            root=root->next;
        }
        sort(num.begin(),num.end());
        root=head;
        for(int i =0; i<num.size();i++){
            root->val=num[i];
            root=root->next;
        }
        return head;
    }
};