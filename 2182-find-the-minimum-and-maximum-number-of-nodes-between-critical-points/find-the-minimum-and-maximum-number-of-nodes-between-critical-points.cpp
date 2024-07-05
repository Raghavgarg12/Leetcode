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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int>ans;
        ListNode * temp1 = head;
        ListNode* temp2 = head->next;
        int temp=temp2->val,i=1;
        temp2=temp2->next;
        if(temp2==NULL) return {-1,-1};
        while(temp2!=NULL){
            if((temp<temp1->val && temp<temp2->val)||(temp>temp1->val && temp>temp2->val)){
                ans.push_back(i);
            }
            temp1=temp1->next;
            temp=temp2->val;
            temp2=temp2->next;
            i++;
        }
        if(ans.size()<2) return {-1,-1};
        int mini=INT_MAX;
        for(int i=0;i<ans.size()-1;i++){
            mini=min(mini,ans[i+1]-ans[i]);
        }
        return {mini,ans[ans.size()-1]-ans[0]};
    }
};