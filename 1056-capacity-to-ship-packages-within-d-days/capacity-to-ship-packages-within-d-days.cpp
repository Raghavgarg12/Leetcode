class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int low=*max_element(weights.begin(),weights.end());
        int sum=0,mid,m,ans=0;
        for(auto i: weights) sum+=i;
        // int low=sum/days;
        int high=sum;
        while(low<=high){
            mid=(low+high)/2;
            m=check(weights,mid);
            cout<<m<<endl;
            if(m>days){
                low=mid+1;
            }
            else{
                ans=mid;
                high=mid-1;
            }
        }
        return ans;
    }
    int check(vector<int>& weights, int mid){
        int sum=0,count=1;
        for(auto i: weights){
            sum+=i;
            if(sum>mid){
                count++;
                sum=i;
            }
        }
        return count;
    }
};