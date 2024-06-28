class Solution {
public:
    static bool comp(const pair<int,int>& a, const pair<int,int>& b) {
    return a.second < b.second;
}
    long long maximumImportance(int n, vector<vector<int>>& roads) {
        vector<long long>nums(n,0);
        vector<pair<int,int>>arr(n);
        long long ans=0;
        for(auto road: roads){
            nums[road[0]]++;
            nums[road[1]]++;
        }
        for(int i=0;i<n;i++){
            arr[i]={i,nums[i]};
        }
        // sort(arr.begin(),arr.end(),comp);
        sort(arr.begin(), arr.end(),
             [](const auto& a, const auto& b) { return a.second < b.second; });
        for(int i=0;i<n;i++){
            arr[i].second=i+1;
            ans+=nums[arr[i].first]*arr[i].second;
        }
        return ans;
    }
};
