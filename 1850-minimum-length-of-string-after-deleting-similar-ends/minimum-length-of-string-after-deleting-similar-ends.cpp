class Solution {
public:
    int minimumLength(string s) {
        int l=0,r=s.length()-1;
        while(s[l]==s[r] && l<r){
            while(s[l]==s[l+1] && l+1<r) l++;
            while(s[r]==s[r-1] && l+1<r) r--;
            if(l<r){
                l++;
                r--;
            }
            cout<<l<<r<<endl;
        }
        return r-l+1;
    }
};