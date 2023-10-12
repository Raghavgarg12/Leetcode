class Solution {
public:
    int majorityElement(vector<int>& nums) {
    int n=nums.size();
    sort(nums.begin(),nums.end());
    int i,k=1,ans=0;
    for(i=1;i<n;i++){
        if(nums[i]!=nums[i-1]) {
            if (k>(n/2)) return nums[i-1];
            k=1;
        } 
        else k+=1;
    }
    return nums[i-1];
    }
};