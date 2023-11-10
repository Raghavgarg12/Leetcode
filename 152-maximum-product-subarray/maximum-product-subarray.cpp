// class Solution {
// public:
//     int maxProduct(vector<int>& nums) {
//         int n=nums.size();
//         int i,j,temp,flag=0,ans=0,maxx=nums[0];
//         if(n<1) return 0;
//         if(n<2) return maxx;
//         if(n<3) return max(max(maxx,nums[0]*nums[1]),max(nums[0],nums[1]));
//         for(i=1;i<n;i++){
//             if(nums[i]==0) maxx=0;
//             else if(nums[i]>0 && flag==0){
//                 flag=0;
//                 maxx=maxx*nums[i];
//                 ans=max(maxx,ans);
//             }
//             else{
//                 flag=1;
//                 temp=nums[i];
//                 for(j=i+1;j<n;j++){
//                     if(nums[j]==0) break;
//                     if(maxx<0 && temp<0){
//                         maxx=maxx*temp;
//                         ans=max(maxx,ans);
//                         flag=0;
//                         break;
//                     }
//                     if(maxx>0 && temp>0) {
//                         maxx=maxx*temp;
//                         ans=max(maxx,ans);
//                         flag=0;
//                         break;
//                     }
//                     else temp=temp*nums[j];
//                 }
//             }
//         }
//         return ans;
//     }
// };
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxi = INT_MIN;
        int prod=1;

        for(int i=0;i<nums.size();i++)
        {
          prod*=nums[i];
          maxi=max(prod,maxi);
          if(prod==0)
           prod=1;
        }
        prod=1;
        for(int i=nums.size()-1;i>=0;i--)
        {
          prod*=nums[i];

          maxi=max(prod,maxi);
          if(prod==0)
           prod=1;
        }
        return maxi;
    }
};