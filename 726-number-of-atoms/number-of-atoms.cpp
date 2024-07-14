class Solution {
public:
    string countOfAtoms(string formula) {
        int n = formula.size();
        unordered_map<string,int>final;
        stack<int>stack;
        string num="",atom="",ans="";
        int mul=1;
        for(int i=n-1;i>=0;i--){
            char temp=formula[i];
            while(isdigit(temp)){
                num=temp+num;
                i--;
                temp=formula[i];
            }
            if(islower(temp)){
                atom=temp+atom;
            }
            if(isupper(temp)){
                atom=temp+atom;
                int count=num.empty()?1:stoi(num);
                final[atom]+=count*mul;
                atom="";
                num="";
            }
            if(temp==')'){
                int currmul=num.empty()?1:stoi(num);
                stack.push(currmul);
                mul*=currmul;
                num="";
                }
                if(temp=='('){
                    mul/=stack.top();
                    stack.pop();
                }
            }
            vector<pair<string, int>> sortedVec(final.begin(), final.end());
            sort(sortedVec.begin(), sortedVec.end());
            for(auto x: sortedVec){
                ans+=x.first;
                if(x.second>1) ans+=to_string(x.second);
            }
        return ans;
    }
};