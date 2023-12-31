// class Solution {
// public:
//     int maxSubArray(vector<int>& nums) {
//     int n=nums.size();
//     if(n==1) return nums[0];
//     int i=0,j=1,k=1,ans=accumulate(nums.begin(),nums.end(),0),l=0,r=0;
//     for(i=0;i<n-1;i++){
//         cout<<ans<<endl;
//         l=accumulate(nums.begin()+j,nums.end(),0);
//         r=accumulate(nums.begin(),nums.end()-k,0);
//         if(l>r){
//             nums.erase(nums.begin());
//             ans=max(ans,l);
//         }
//         else{
//             nums.erase(nums.end()-1);
//             ans=max(ans,r);
//         }
//     }
//     return ans;  
//     }
// };
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0, maxx = INT_MIN;
        for(auto c : nums){
            sum+=c;
            maxx=max(maxx,sum);
            if(sum<0) sum=0;

        }
            //curMax = max(c, curMax + c),
            //maxTillNow = max(maxTillNow, curMax);
        return maxx;
    }
};