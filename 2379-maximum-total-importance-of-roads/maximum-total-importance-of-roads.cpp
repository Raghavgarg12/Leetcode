class Solution {
public:
    static bool comp(const pair<int,int>& a, const pair<int,int>& b) {
    return a.second < b.second;
}
    long long maximumImportance(int n, vector<vector<int>>& roads) {
        vector<long long>nums(n,0);
        long long ans=0;
        for(const auto road: roads){
            nums[road[0]]++;
            nums[road[1]]++;
        }
        sort(nums.begin(),nums.end());
        long long val=1;
        for(int i=0;i<n;i++){
            ans+=nums[i]*val;
            val++;
        }
        return ans;
    }
};
