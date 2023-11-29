class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size();
        if((long long)m*k>n) return -1;
        long long high=*max_element(bloomDay.begin(),bloomDay.end());
        long long low=*min_element(bloomDay.begin(),bloomDay.end());
        int mid,days,ans;
        while(low<=high){
            mid=(low+high)/2;
            cout<<mid<<endl; //5 2 2 2 2 ...
            days=check(bloomDay,k,mid);
            if(days>=m) {
                high=mid-1;
                ans=mid;
            }
            else low=mid+1;
        }
        return ans;
    }
    int check(vector<int> &bloomDay, int k, int mid){
        int count=0,ans=0;
        for(auto i : bloomDay){
            if(i>mid) count=0;
            if(i<=mid) count++;
            if(count>=k) ans++, count=0;
        }
        // cout<<ans<<endl; 3 2 2 2 2 ...
        return ans;
    }
};