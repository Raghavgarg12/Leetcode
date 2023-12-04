class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int low=0,high=0;
        for(auto i:nums) low=max(low,i), high+=i;
        int mid,m,ans;
        while(low<=high){
            mid=(low+high)/2;
            m=check(nums,mid);
            if(m>k) low=mid+1;
            else 
            {
                high=mid-1;
                ans=mid;
            }
        }
        return ans;
    }
    int check(vector<int>& nums, int mid){
        int count=0,ans=0;
        for(auto i:nums){
            count+=i;
            if(count>mid){
                ans++;
                count=i;
            }
        }
        return ans+1;
    }
};