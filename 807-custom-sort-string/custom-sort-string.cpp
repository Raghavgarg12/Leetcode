class Solution {
public:
    string customSortString(string order, string s) {
        unordered_map<char,int>mp;
        string ans="";
        for(const char& x:s) mp[x]++;
        for(const char& x:order){
            ans.append(mp[x],x);
            mp[x]=0;
        }
        for(const char& x:s){
            if(mp[x]!=0) {
                ans.append(mp[x],x);
                mp[x]=0;
            }
        }
        return ans;
    }
};