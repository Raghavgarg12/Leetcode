class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int>mp;
        int ans=0,maxi=INT_MIN;
        for(auto x:nums) mp[x]++;
        for(auto const& x: mp){
            if(x.second > maxi){
                maxi=x.second;
                ans=x.second;
            }
            else if(maxi == x.second) ans+=maxi;
        }
        return ans;
    }
};