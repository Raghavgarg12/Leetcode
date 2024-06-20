class Solution {
public:
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(),position.end());
        int n=position.size();
        int l=1,r=position[n-1],mid=0,ans=0;
        while(l<=r){
            mid=(l+r)/2;
            int ball=1;
            int temp=0;
            for(int i=1;i<n && ball<m;i++){
                if(position[i]-position[temp]>=mid) {
                    ball++;
                    temp=i;
                }
            }
            if(m==ball) {
                l=mid+1;
                ans=mid;
            }
            else r=mid-1;
        }
        return ans;
    }
};