class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int n=customers.size();
        vector<int>arr(n,0);
        int ans=0,temp=0;
        for(int i=0;i<n;i++){
            if(grumpy[i]==1) arr[i]=customers[i]; 
            else ans+=customers[i];
        }
        for(int i=0;i<minutes;i++) temp+=arr[i];
        int s=temp;
        for(int i=minutes;i<n;i++){
            temp+=arr[i];
            temp-=arr[i-minutes];
            s=max(s,temp);
        }
        return ans+s;
    }
};