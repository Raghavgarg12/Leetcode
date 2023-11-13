class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int i;
        if(target<nums[n/2]){
            for(i=0;i<n/2;i++) if(nums[i]==target) return i;
        }
        else for(i=n/2;i<n;i++) if(nums[i]==target) return i;
        return -1;
    }
};