class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n=nums.size();
        // vector<int>arr(n+1,0);
        unordered_map<int,int>mp;
        mp[0]=1;
        int sum=0,ans=0;
        // for(int i=0;i<n;i++) arr[i+1]=nums[i]+arr[i];
        for(int i=0;i<n;i++){
            sum=sum+nums[i];
            int res=sum%k;
            // for(int j=i+1;j<n+1;j++){
            //     if((arr[j]-arr[i])%k==0) ans++;
            //     cout<<i<<" "<<j<<" "<<ans<<" "<<endl;
            // }
            // if(nums[i]%k==0) ans++;
            if(res<0) res+=k;
            if(mp.find(res)!=mp.end()){
                ans+=mp[res];
            }
            mp[res]++;
            cout<<res<<" "<<mp[res]<<endl;
        }
        // for(auto x: mp) cout<<x.first<<endl;
        return ans;
    }
};
// 2 1
// 4 4
// 0 2