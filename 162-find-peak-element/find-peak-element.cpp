class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        int l=0,mid,r=n-1;
        if(n<2) return 0;
        if(n<3) if (nums[0]<nums[1]) return 1; else return 0;
        while(l<=r)
        {
            mid=(l+r)/2;
            if(0<mid && mid<n-1)
            {
            if(nums[mid-1]<nums[mid] && nums[mid]>nums[mid+1]) return mid;
            else if(nums[mid-1]<nums[mid] && nums[mid]<nums[mid+1]) l=mid+1;
            else if(nums[mid-1]>nums[mid] && nums[mid]>nums[mid+1]) r=mid;
            else
            {
                if(nums[mid-1]<nums[mid+1]) l=mid+1;
                else r=mid;
            }
            }
            else return mid;
        }
        return mid;
    }
};