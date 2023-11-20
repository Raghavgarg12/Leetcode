class Solution {
public:
    int findMin(std::vector<int>& nums) {
        int low = 0, high = nums.size() - 1,ans=INT_MAX;
        while (low <= high) {
            int mid = (low + high) / 2;
            if(nums[low]<nums[high]) return min(ans,nums[low]);
            ans=min(ans,nums[mid]);
            if (nums[low] <= nums[mid]) low = mid + 1;
            else high = mid - 1;
        }
        return ans;
    }
};