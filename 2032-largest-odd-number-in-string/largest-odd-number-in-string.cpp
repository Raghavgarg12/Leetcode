class Solution {
public:
    string largestOddNumber(string num) {
        int n = num.length(),a,i;
        if(n<1) return "";
        for(i=n-1;i>=0;i--){
            a=(int)num.at(i)-48;
            if(a%2!=0) return num.substr(0,i+1);
        }
        return "";
    }
};