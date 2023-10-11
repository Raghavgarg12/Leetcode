class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int i,k=0;
        for (i=0;i<n;i++) if(nums[i]!=0) nums[k++]=nums[i];
        for(i=k;i<n;i++) nums[i]=0;
    }

};