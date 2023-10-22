class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n= nums.size();
        if(n==0) return 0;
        int i,ans=0,maxi=1;
        sort(nums.begin(),nums.end());
        for(i=0;i<n-1;i++){
            if(nums[i+1]==nums[i]) continue;
            if(nums[i+1]-nums[i]==1) maxi++;
            else{
                ans=max(ans,maxi);
                maxi=1;
            }
        }
        return max(ans,maxi);
    }
};