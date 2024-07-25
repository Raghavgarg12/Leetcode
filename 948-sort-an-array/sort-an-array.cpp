class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        int n=nums.size();
        int maxi=INT_MIN,mini=INT_MAX;
        for(int x:nums){
            maxi=max(x,maxi);
            mini=min(x,mini);
        }
        vector<int>count(maxi-mini+1,0),ans(n,0);
        for(int x:nums) count[x-mini]++;
        for(int i=1;i<maxi-mini+1;i++){
            count[i]+=count[i-1];
        }
        for(int x:nums){
            ans[count[x-mini]-1]=x;
            count[x-mini]--;
        }
        return ans;
    }
};