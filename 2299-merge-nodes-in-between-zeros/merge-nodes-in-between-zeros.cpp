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
    ListNode* mergeNodes(ListNode* head) {
        head=head->next;
        vector<int>arr;
        int sum=0;
        while(head!=NULL){
            // cout<<head->val<<endl;
            if(head->val==0){
                arr.push_back(sum);
                sum=0;
                head=head->next;
            }
            else{
            sum+=head->val;
            head=head->next;
            }
        }
        ListNode* root = new ListNode(arr[0]);
        head=root;
        for(int i=1;i<arr.size();i++){
            ListNode* temp = new ListNode(arr[i]);
            head->next=temp;
            head=head->next;
        }
        return root;
    }
};