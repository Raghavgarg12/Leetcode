class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int low=*max_element(nums.begin(),nums.end());
        int high=accumulate(nums.begin(),nums.end(),0);
        int mid,m,ans;
        while(low<=high){
            mid=(low+high)/2;
            // cout<<mid<<endl;
            m=check(nums,mid);
            // if(m==k) ans=min(mid,ans);
            if(m>k) low=mid+1;
            else 
            {
                high=mid-1;
                ans=mid;
            }

        }
        return ans;
    }
    int check(vector<int>& nums, int mid){
        int count=0,ans=0;
        cout<<mid<<endl;
        for(auto i:nums){
            count+=i;
            cout<<count;
            if(count>mid){
                ans++;
                count=i;
            }
            // else if(count==mid){
            //     ans++;
            //     count=0;
            // }
            cout<<ans<<endl;
        }
        return ans+1;
    }
};