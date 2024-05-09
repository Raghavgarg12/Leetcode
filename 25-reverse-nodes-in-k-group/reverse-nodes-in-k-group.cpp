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
    ListNode* reverselist(ListNode* temp) {
        ListNode* init = NULL;
        ListNode* next = temp;
        while (temp) {
            next = next->next;
            temp->next = init;
            init = temp;
            temp = next;
        }
        return init;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp=head;
        ListNode* start = head;
        ListNode* next;
        ListNode* ans = head;
        ListNode* prev;
        int count=1,iter=1;
        while(temp){
            cout<<temp->val<<endl;
            temp=temp->next;
            count++;
            if(count==k && temp){
                cout<<"Aan de"<<endl;
                next=temp->next;
                temp->next=NULL;
                if(iter==1){
                    ans=reverselist(start);
                    cout<<ans->val;
                    prev=start;
                }
                else{
                    prev->next=reverselist(start);
                    prev=start;
                }
                count=1;
                iter++;
                start=next;
                temp=next;
            }
        }
        prev->next=start;
        return ans;
    }
};