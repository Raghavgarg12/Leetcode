class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        int l=trust.size();
        if(l==0){
            if(n<2) return n;
            else return -1;
        }
        unordered_map<int,int>mp;
        int ans=0;
        for(int i=0;i<l;i++){
            mp[trust[i][0]]--;
            mp[trust[i][1]]++;
            if(mp[trust[i][1]]>mp[ans]) ans=trust[i][1];
            cout<<ans<<endl;
        }
        cout<<ans;
        if(mp[ans]<n-1) return -1;
        return ans;
    }
};