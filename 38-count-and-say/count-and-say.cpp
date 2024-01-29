class Solution {
public:
    string solve(string s){
        int n=s.length(),sum=1,j;
        string ss;
        for(j=0;j<n;j++){
            if(s[j]==s[j+1]) sum++;
            else{
                ss+= std::to_string(sum) + s[j];
                sum=1;
            }
        }
        // ss += std::to_string(sum) + s[j-1];
        return ss;
    }
    string countAndSay(int n) {
        int i;
        string ans="1";
        for(i=1;i<n;i++){
            ans=solve(ans);
            cout<<ans<<endl;
        }
        return ans;
    }
};