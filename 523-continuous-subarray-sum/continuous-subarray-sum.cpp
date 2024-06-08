class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        int res=0;
        unordered_map<int,int>mp;
        mp[0]=-1;
        for(int i=0;i<n;i++){
            res=(res+nums[i])%k;
            cout<<res<<endl;
            if(mp.find(res)!=mp.end()){
                if(i-mp[res]>1) return true;
            }
            else mp[res]=i;
        }
        return false;
    }
};