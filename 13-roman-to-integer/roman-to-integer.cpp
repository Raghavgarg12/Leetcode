class Solution {
public:
    int romanToInt(string s) {
        int n = s.length();
        int i,ans=0;
        vector<int> s2(n);
        long int a=0;
        for(i=0;i<n;i++){
            if(s.at(i)=='I') s2[i]=1;
            else if(s.at(i)=='V') s2[i]=5;
            else if(s.at(i)=='X') s2[i]=10;
            else if(s.at(i)=='L') s2[i]=50;
            else if(s.at(i)=='C') s2[i]=100;
            else if(s.at(i)=='D') s2[i]=500;
            else if(s.at(i)=='M') s2[i]=1000;
            // cout<<s2[i];
        }
        cout<<endl;
        for(i=n-1;i>=0;i--){
            cout<<s2[i]<<" ";
            ans+=s2[i];
            cout<<ans<<" ";
            if(i>0 && s2[i-1]<s2[i]) ans-=s2[i-1], i--;
            cout<<ans<<endl;
        }
        return ans;
    }
};