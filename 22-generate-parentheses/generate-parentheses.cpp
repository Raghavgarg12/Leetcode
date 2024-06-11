class Solution {
public:
vector<string>ans;
    void check(string s, int l, int r){
        if(l==0 && r==0) {
            ans.push_back(s);
            return;
        }
        if(l!=0) check(s+'(',l-1,r);
        if(l<r) check(s+')',l,r-1);
    }
    vector<string> generateParenthesis(int n) {
        check("",n,n);
        return ans;
    }
};