class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        int num[n];
        num[0]=nums[0];
        int i=0,k=n-1,j=1;
        for(i=1;i<n;i++){
            if(nums[i-1]!=nums[i]){nums[j]=nums[i]; ++j;}
        }
        return j;
        }
};