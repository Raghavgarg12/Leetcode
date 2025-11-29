class Solution {
public:

    int sum_of_elements(int n){
        return n*(n+1)/2;
    }

    int maxChunksToSorted(vector<int>& arr) {
        int n = arr.size();
        int ans=0;
        int sum=0;
        for (int i=0;i<n;i++){
            sum+=arr[i];
            if (sum == sum_of_elements(i)) ans++;
        }
        return ans;
    }
};