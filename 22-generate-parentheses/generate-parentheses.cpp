class Solution {
public:
vector<string>ans;
    void check(string s, int l, int r){
        if(l==0 && r==0) {
            ans.push_back(s);
            return;
        }
        else if(l==r){
            check(s+'(',l-1,r);
        }
        else if(l==0) check(s+')',l,r-1);
        else //if(l<r)
        {
            check(s+'(',l-1,r);
            check(s+')',l,r-1);
        }
    }
    vector<string> generateParenthesis(int n) {
        check("",n,n);
        return ans;
    }
};