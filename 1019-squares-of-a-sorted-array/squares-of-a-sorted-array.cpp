class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n);
        int l=0,r=n-1,i=n-1;
        while(l<=r){
            if(abs(nums[l])<abs(nums[r])){
                ans[i]=nums[r]*nums[r];
                r--;
            }
            else{
                ans[i]=nums[l]*nums[l];
                l++;
            }
            i--;
        }
        return ans;
    }
};