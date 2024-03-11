class Solution {
public:
    string customSortString(string order, string s) {
        unordered_map<char,int>mp;
        int n=s.length();
        int i;
        string ans="";
        for(i=0;i<n;i++) mp[s[i]]++;
        n=order.length();
        cout<<mp['t'];
        for(i=0;i<n;i++){
            ans.append(mp[order[i]],order[i]);
            mp[order[i]]=0;
        }
        for(char x: s){
            if(mp[x]!=0) {
                ans.append(mp[x],x);
                mp[x]=0;
            }
        }
        return ans;
    }
};