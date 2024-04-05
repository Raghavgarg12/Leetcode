class Solution {
public:
    string makeGood(string s) {
        for(int i=0;i<s.length();i++){
            if(abs(s[i]-s[i+1])==32){
                s.erase(s.begin()+i,s.begin()+i+2);
                i=-1;
            }
        }
        return s;
    }
};