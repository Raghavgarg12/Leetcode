class Solution {
public:
    int numTeams(vector<int>& rating) {
        int n=rating.size(),flag=0,ans=0;
        for(int i=0;i<n-2;i++){
            for(int j=i+1;j<n-1;j++){
                if(rating[i]<rating[j]) flag=1;
                else flag=0;
                for(int k=j+1;k<n;k++){
                    if(rating[j]<rating[k] && flag==1) ans++;
                    else if(rating[j]>rating[k] && flag==0) ans++;
                }
            }
        }
        return ans;
    }
};