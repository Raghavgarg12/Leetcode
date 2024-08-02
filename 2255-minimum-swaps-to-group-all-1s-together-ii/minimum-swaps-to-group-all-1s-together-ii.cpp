class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int n=nums.size(),ones=0,window=0,maxi=INT_MIN;
        for(int i=0;i<n;i++){
            nums.push_back(nums[i]);
            if(nums[i]==1) ones++;
        }
        n*=2;
        for(int i=0;i<ones;i++){
            if(nums[i]==1) window++;
        }
        maxi=max(maxi,window);
        for(int i=ones;i<n;i++){
            if(nums[i]==1) window++;
            if(nums[i-ones]==1) window--;
            maxi=max(window,maxi);
        }
        return ones-maxi;
    }
};