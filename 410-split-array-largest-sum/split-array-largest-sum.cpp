class Solution {
public:
//     int splitArray(vector<int>& nums, int k) {
//         int low=0,high=0;
//         for(auto i:nums) low=max(low,i), high+=i;
//         int mid,m,ans;
//         while(low<=high){
//             mid=(low+high)/2;
//             m=check(nums,mid);
//             if(m>k) low=mid+1;
//             else 
//             {
//                 high=mid-1;
//                 ans=mid;
//             }
//         }
//         return ans;
//     }
//     int check(vector<int>& nums, int mid){
//         int count=0,ans=0;
//         for(auto i:nums){
//             count+=i;
//             cout<<count;
//             if(count>mid){
//                 ans++;
//                 count=i;
//             }
//         }
//         return ans+1;
//     }
	int splitArray(vector<int>& nums, int m) {
        int l=0,r=0,n=nums.size();
        for(int i=0;i<n;++i) l=max(l,nums[i]), r+=nums[i];
        
        int mid=0,ans=0;
        while(l<=r){
            mid=(l+r)/2;
            int count=0,tempsum=0;
            for(int i=0;i<n;++i){
                if(tempsum+nums[i]<=mid) tempsum+=nums[i];
                else count++,tempsum=nums[i];
            }
            count++; 
            
            if(count<=m) r=mid-1, ans=mid;
            else l=mid+1;
        }  
        return ans;
    }
};
