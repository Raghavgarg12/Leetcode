class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        vector<int>subarr;
        for(int i=0;i<n;i++){
            int sum=0;
            for(int j=i;j<n;j++){
                sum+=nums[j];
                subarr.push_back(sum);            
            }
        }
        sort(subarr.begin(),subarr.end());
        long long sum=0;
        int mod=1e9+7;
        for(int i=left-1;i<right;i++){
            sum+=subarr[i];
        }
        sum=sum%mod;
        return sum;
    }
};