class Solution {
public:
    vector<vector<string>>ans;
    bool check(string s){
        int n=s.length();
        int i=0,j=n-1;
        while(i<=j){
            if(s[i]!=s[j]) return false;
            i++;
            j--;
        }
        return true;
    }
    void get(string s, int start, vector<string> temp){
        if(start==s.length()) ans.push_back(temp);
        for(int i=start;i<s.length();i++){
            string sub=s.substr(start,i-start+1);
            if(check(sub)){
                temp.push_back(sub);
                get(s,i+1,temp);
                temp.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<string>temp;
        get(s,0,temp);
        return ans;
    }
};