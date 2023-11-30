class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low=1,mid,ans,m;
        int high=*max_element(nums.begin(),nums.end());
        while(low<=high){
            mid=(low+high)/2;
            m=check(nums,mid);
            if(m>threshold) low=mid+1;
            else{
                high=mid-1;
                ans=mid;
            }
        }
        return ans;
    }
    int check(vector<int>& nums, int mid){
        int count=0;
        for(auto i : nums) count+=ceil((double)i/mid);
        return count;
    }
};