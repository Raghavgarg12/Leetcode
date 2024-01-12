class Solution {
public:
    long long convert(string s){
        long long a,num=0;
        for(auto x: s){
            a=(int)x-48;
            num=(long long)num*10+a;
        }
        return num;
    }
    string largestOddNumber(string num) {
        int n = num.length(),a,i;
        string ans;
        if(n<1) return ans;
        // long long s=convert(num);
        // cout<<s<<endl;
        for(i=n-1;i>=0;i--){
            a=(int)num.at(i)-48;
            // s=s/10;
            cout<<a<<endl;
            if(a%2!=0) return num.substr(0,i+1);
        }
        return ans;
    }
};