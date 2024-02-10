class Solution 
{
// private:
    string t;
//     int pallindrome(string t){
//         string r=t;
//         reverse(t.begin(),t.end());
//         if(t==r) return 1;
//         return 0;
    // }
    int check(int l, int r, int ans = 0)
    {
        while(l >= 0 and r <= t.size())
        {
            if(t[l--] == t[r++]) ans++;
            else break;
        }
        return ans;
    }
public:
    int countSubstrings(string s) 
    {
        int n = size(s), ans = 0;t = s;
        for(int i = 0; i < n; i++)
        {
            ans += check(i,i);    // odd length palindromes
            ans += check(i,i+1); // even length palindromes
        }
        return ans;
    }
};
//     public:
//     int countSubstrings(string s){
//         int n =s.length(),ans=0;
//         for(int i=0;i<n;i++){
//             for(int j=i;j<n;j++) ans+=pallindrome(s.substr(i,j-i+1));
//             }
//         return ans;
//     }
// };