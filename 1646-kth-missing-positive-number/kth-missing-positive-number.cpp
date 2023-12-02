class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n = arr.size();
        // if(arr[0]>=k) return arr[0]-k;
        int count=0,m=1,i;
        for(i=0;i<n;i++){
            count+=(arr[i]-m);
            m=arr[i]+1;
            if(count>=k) return arr[i]-(count-k+1);
        }
        return arr[n-1]+k-count;
    }
};