// class Solution {
// public:
//     vector<int> sortedSquares(vector<int>& nums) {
//         vector<int>ans;
//         int n=nums.size();
//         int l=0,r=n-1;
//         while(l<=r){
//             int a=nums[l]*nums[l];
//             int b=nums[r]*nums[r];
//             if(a<b){
//                 ans.insert(ans.begin(),b);
//                 r--;
//             }
//             else{
//                 ans.insert(ans.begin(),a);
//                 l++;
//             }
//         }
//         return ans;
//     }
// };
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        int s=0,e=n-1;
        vector<int>ans(n);
        for(int i =n-1;i>=0;i--){
            if(abs(nums[s])>=abs(nums[e])){
                ans[i] = nums[s]*nums[s];
                s++;
            }else{
                ans[i] = nums[e]*nums[e];
                e--;
            }
        }
        return ans;
    }
};