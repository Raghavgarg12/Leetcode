class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int i,k=0;
        for (i=0;i<n;i++) if(nums[i]!=0) swap(nums[k++],nums[i]);
    }

};