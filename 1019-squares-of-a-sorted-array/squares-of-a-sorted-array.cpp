class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>ans;
        int n=nums.size();
        int l=0,r=n-1;
        while(l<=r){
            if(abs(nums[l])<abs(nums[r])){
                ans.insert(ans.begin(),nums[r]*nums[r]);
                r--;
            }
            else{
                ans.insert(ans.begin(),nums[l]*nums[l]);
                l++;
            }
        }
        return ans;
    }
};