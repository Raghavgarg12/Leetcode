class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        long long n=nums.size();
        long long start=0,end=0,ans=0;
        long long maxi=*max_element(nums.begin(),nums.end());
        unordered_map<int,int> mp;
        for(end=0;end<n;end++){
            mp[nums[end]]++;
            while(mp[maxi]==k) {
                mp[nums[start]]--;
                start++;
            }
            ans+=start;
        }
        return ans;
    }
};