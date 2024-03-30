class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return check(nums,k)-check(nums,k-1);
    }   
    int check(vector<int>nums,int k){
        int n = nums.size();
        unordered_map<int,int>mp;
        int start=0,end=0,ans=0;
        for(end=0;end<n;end++){
            mp[nums[end]]++;
            while(mp.size()>k){
                if(--mp[nums[start]]==0) mp.erase(nums[start]);
                start++;
            }
            ans+=(end-start+1);
        }
        return ans;
    }
};