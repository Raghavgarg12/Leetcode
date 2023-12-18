class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int n=nums.size();
        int ans;
        sort(nums.begin(),nums.end());
        ans=-nums[0]*nums[1]+nums[n-1]*nums[n-2];
        return ans;
    }
};