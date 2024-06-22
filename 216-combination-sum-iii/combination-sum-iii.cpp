class Solution {
public:
vector<vector<int>>ans;
    void check(vector<int>temp,int start, int k, int n){
        if(k==0 && n==0) {
            ans.push_back(temp);
            return;
        }
        for(int i=start;i<=9 && n>0;i++){
            temp.push_back(i);
            check(temp,i+1,k-1,n-i);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int>temp;
        check(temp,1,k,n);
        return ans;
    }
};