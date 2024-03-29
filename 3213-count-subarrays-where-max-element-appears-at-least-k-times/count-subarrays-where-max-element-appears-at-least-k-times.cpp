class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        long long n=nums.size();
        long long start=0,end=0,ans=0,count=0;
        long long maxi=*max_element(nums.begin(),nums.end());
        for(end=0;end<n;end++){
            if(nums[end]==maxi) count++;
            while(count==k) {
                if(nums[start]==maxi) count--;
                start++;
            }
            ans+=start;
        }
        return ans;
    }
};