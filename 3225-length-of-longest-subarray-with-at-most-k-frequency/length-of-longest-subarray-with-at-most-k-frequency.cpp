class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int>mp;
        int start=0, end=0, maxi=INT_MIN;
        for(end=0;end<n;end++){
            mp[nums[end]]++;
            while(mp[nums[end]]>k){
                mp[nums[start]]--;
                start++;
            }
            maxi=max(maxi,end-start+1);
        }
        return maxi;
    }
};