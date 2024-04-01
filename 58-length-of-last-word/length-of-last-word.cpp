class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.length();
        int ans=0;
        while(s[n-1]==' ') n--;
        for(int i=n-1;i>=0;i--){
            if(s[i]==' ') return ans;
            ans++;
        }
        return ans;
    }
};