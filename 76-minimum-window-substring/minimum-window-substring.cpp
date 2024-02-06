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
            char st=s[j];
            window[s[j]]++;
            if(mp.find(st)!=mp.end() && window[st] == mp[st]) formed++;
            while(formed==req && i<=j){
                if(ans[0]==-1 || j-i+1<ans[0]){
                    ans[0]=j-i+1;
                    ans[1]=i;
                    ans[2]=j;
                }
                st=s[i];
                window[st]--;
                if(mp.find(st)!=mp.end() && window[st]<mp[st]) formed--;
                i++;
            }
            j++;
        }
        if(ans[0]==-1) return "";
        return s.substr(ans[1],ans[0]);
    }
};