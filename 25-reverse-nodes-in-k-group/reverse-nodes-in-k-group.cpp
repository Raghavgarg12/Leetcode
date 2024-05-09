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
        // vector<int>ans(k);
        // ListNode* answer = new ListNode();
        // ListNode* iter = answer;
        // int n=0;
        // while(temp){
        //     ans[n]=temp->val;
        //     n++;
        //     temp=temp->next;
        //     if(n==k){
        //         while(n){
        //             // cout<<ans[n-1]<<endl;
        //             iter->val=ans[n-1];
        //             iter->next=new ListNode();
        //             iter=iter->next;
        //             n--;
        //         }
        //     }
        // }
        // cout<<n<<endl;
        // if(n>0){
        //     while(n){
        //         cout<<ans[n-1];
        //         iter->val=ans[n-1];
        //         // iter->next = new ListNode()
        //         iter=iter->next;
        //         n--;
        //     }
        // }
        // else delete iter;
        // return answer;
        // ListNode* temp = head;
        // vector<int>ans;
        // int i=0,n=1;
        // while(temp){
        //     for(i=n*k;i>n*k-k;i--){
        //         cout<<temp->val;
        //         cout<<i<<endl;
        //         ans.insert(ans.begin()+i,temp->val);
        //         temp=temp->next;
        //         if(!temp) break;
        //     }
        //     n++;
        // }
        // i=0;
        // ListNode* answer = new ListNode();
        // ListNode* iter = answer;
        // while(k-1){
        //     iter->val=ans[i++];
        //     iter->next = new ListNode();
        //     iter=iter->next;
        // }
        // iter->val=ans[i];
        // return answer;
        // ListNode* temp = head;
    }
};