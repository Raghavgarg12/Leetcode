class Solution {
public:
    int maxDepth(string s) {
        int i=0,ans=INT_MIN;
        for(auto x: s){
            if(x=='(') i++;
            ans=max(ans,i);
            if(x==')') i--;
        }
        return ans;
    }
};