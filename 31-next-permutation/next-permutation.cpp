class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int i=n-1,k=n-1;
        while(i>0 && nums[i]<=nums[i-1]) i--;
        i--;
        cout<<i;
        if(i<0) reverse(nums.begin(),nums.end());
        else{
        while(nums[k]<=nums[i]) k--;
        cout<<k;
        swap(nums[i],nums[k]);
        reverse(nums.begin()+i+1,nums.begin()+n);        
        }
    }
};