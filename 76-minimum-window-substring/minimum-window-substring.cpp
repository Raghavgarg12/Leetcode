class Solution {
public:
    string minWindow(string s, string t) {
        int m=s.length(),n=t.length();
        if (s.empty() || t.empty() || m<n) return "";
        int i=0,j=0,formed=0;
        unordered_map<char,int>mp;
        for(i=0;i<n;i++) mp[t[i]]++;
        i=0;
        int req=mp.size();
        unordered_map<char,int>window;
        int ans[3]={-1,0,0};
        while(j<m){
            window[s[j]]++;
            if(mp.find(s[j])!=mp.end() && window[s[j]] == mp[s[j]]) formed++;
            while(formed==req && i<=j){
                if(ans[0]==-1 || j-i+1<ans[0]){
                    ans[0]=j-i+1;
                    ans[1]=i;
                    ans[2]=j;
                }
                window[s[i]]--;
                if(mp.find(s[i])!=mp.end() && window[s[i]]<mp[s[i]]) formed--;
                i++;
            }
            cout<<ans[0]<<ans[1]<<ans[2]<<endl;
            j++;
        }
        if(ans[0]==-1) return "";
        return s.substr(ans[1],ans[0]);
    }
};