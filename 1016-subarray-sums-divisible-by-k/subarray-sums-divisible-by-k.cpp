class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int>mp;
        mp[0]=1;
        int sum=0,ans=0;
        for(int i=0;i<n;i++){
            sum=sum+nums[i];
            int res=sum%k;
            if(res<0) res+=k;
            if(mp.find(res)!=mp.end()){
                ans+=mp[res];
            }
            mp[res]++;
        }
        return ans;
    }
};