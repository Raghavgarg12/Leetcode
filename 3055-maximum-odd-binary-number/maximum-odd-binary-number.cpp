class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        unordered_map<char,int>mp;
        int i;
        for(i=0;i<s.length();i++) mp[s[i]]++;
        string ans;
        cout<<mp['1'];
        for(i=1;i<mp['1'];i++) ans=ans+'1';
        mp['1']=mp['1']-i;
        for(i=0;i<mp['0'];i++) ans=ans+'0';
        if(mp['1']==0) ans=ans+'1';
        return ans;
    }
};