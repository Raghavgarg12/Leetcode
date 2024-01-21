class Solution {
public:
    int beautySum(string s) {
        int ans=0;
        for(int i=0;i<s.length()-1;i++){
            unordered_map<char,int>mapo;
            mapo[s[i]]++;
            for(int j=i+1;j<s.length();j++){
                mapo[s[j]]++;
                int maxi=INT_MIN;
                int mini=INT_MAX;
                for(auto it : mapo){
                    maxi=max(maxi,it.second);
                    mini=min(mini,it.second);
                }
                ans=ans+maxi-mini;
            }
        }
        return ans;
    }
};