#include <cctype>
#include <string>
using namespace std;
class Solution {
public:
    string reverseWords(string s) {
        while(s.at(0)==' ') s.erase(0,1);
        int n = s.length(),i,k;
        string ans;
        while(s.at(n-1)==' ') {
            s.erase(n-1,n);
            n = s.length();
        }
        cout<<s;
        n=s.length();
        k=n-1;
        cout<<k<<endl;
        for(i=n-1;i>=0;i--){
            if(s.at(i)==' '){
                if(s.at(i+1)==' ') {
                    k--;
                    continue;
                }
                ans=ans+" "+s.substr(i+1,k-i);
                // cout<<s.substr(i+1,k-i)<<endl;
                k=i-1;
                // cout<<ans<<endl;
            }

        }
        ans=ans+" "+s.substr(0,k+1);
    // s.erase(remove_if(s.begin(), s.end(), isspace), s.end());
    // s.erase(std::remove_if(s.begin(), s.end(), ::isspace), s.end());
    cout<<ans;
    ans.erase(0,1);
    return ans;
    }
};