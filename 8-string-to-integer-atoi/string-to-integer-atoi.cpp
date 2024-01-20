// class Solution {
// public:
//     int myAtoi(string s) {
//         int flag=0;
//         long ans=0;
//         for(auto x: s){
//             if(x=='-') flag=1;
//             if((int)x-48<10 && (int)x-48>=0) {
//                 ans=ans*10+(int)x-48;
//                 if(ans>INT_MAX && flag==1) return INT_MIN;
//                 else if(ans>INT_MAX && flag==0) return INT_MAX;
//             }
//             else if(x==' ' || x=='-' || x=='+') continue;
//             else if(ans==0) return 0;
//             else break;
//         }
//         if(flag==1) return -ans;
//         return ans;
//     }
// };
class Solution {
public:
    int myAtoi(string s) 
    {
        int i=0;
        int sign=1;
        long ans=0;
        while(i<s.length() && s[i]==' ') i++;
        if(s[i]=='-')
        {
            sign=-1;
            i++;
        }
        else if(s[i]=='+') i++;
        while(i<s.length())
        {
            if(s[i]>='0' && s[i]<='9')
            {
                ans=ans*10+(s[i]-'0');
                if(ans>INT_MAX && sign==-1) return INT_MIN;
                else if(ans>INT_MAX && sign==1) return INT_MAX;
                i++;
            }
            else return ans*sign;
        }
        return (ans*sign);
    }
};