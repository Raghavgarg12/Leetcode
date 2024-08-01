class Solution {
public:
    int countSeniors(vector<string>& details) {
        int n=details.size(),ans=0;
        for(string s : details){
            int age=s[11]-'0';
            if(age>6) ans++;
            else if(age==6){
                if(s[12]-'0'>0) ans++;
            }
        }
        return ans;
    }
};