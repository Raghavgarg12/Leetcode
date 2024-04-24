class Solution {
public:
    int tribonacci(int n) {
        int ans[3] = {0,1,1};
        int i;
        if(n<3) return ans[n];
        for(i=3;i<=n;i++){
            ans[i%3]=ans[0]+ans[1]+ans[2];
        }
        cout<<ans[0]<<" "<<ans[1]<<" "<<ans[2];
        if(i%3==0) return ans[2];
        return ans[i%3-1];
    }
};