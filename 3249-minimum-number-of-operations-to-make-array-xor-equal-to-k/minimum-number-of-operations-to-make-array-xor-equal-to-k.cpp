class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
      int n = nums.size();
      int ans=nums[0],sum=0;
        for(int i=1;i<n;i++){
            ans = ans ^ nums[i];
        }
        ans=ans^k;
        cout<<ans;
        while(ans!=0){
            sum += ans & 1;
            ans >>= 1;
        }
        return sum;
    }
};
// 010
// 001
// 011
// 100

// 100
// 001