class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
      int n = nums.size();
      int ans=0,sum=0;
        for (int n : nums) {
            ans = ans ^ n;
        }
        ans=ans^k;
        while(ans!=0){
            sum += ans & 1;
            ans >>= 1;
        }
        return sum;
    }
};