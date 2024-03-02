class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>ans;
        int n=nums.size();
        int l=0,r=n-1;
        while(l<=r){
            int a=nums[l]*nums[l];
            int b=nums[r]*nums[r];
            if(a<b){
                ans.insert(ans.begin(),b);
                r--;
            }
            else{
                ans.insert(ans.begin(),a);
                l++;
            }
        }
        return ans;
    }
};