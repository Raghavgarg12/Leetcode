class Solution {
public:
    int repeatedStringMatch(string a, string b) {
        int n=a.length(),m=b.length();
        if(m==0) return 0;
        int x=ceil((double)m/n);
        int i=x;
        string s=a;
        while(s.length()<m) s+=a;
        while(s.find(b) == string::npos) {
            if(i>x) return -1;
            s+=a;
            i++;
        }
        return i; 
    }
};