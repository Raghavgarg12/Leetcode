class Solution {
public:
vector<string>nums={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
vector<string>ans;
    void check(string temp, int start,string digits){
        if(temp.size()==digits.size()){
            ans.push_back(temp);
            return;
        }
        for(int i=start;i<digits.size();i++){
            for(int j=0;j<nums[int(digits[i]-'0')].size();j++){
                temp+=(nums[int(digits[i])-'0'][j]);
                check(temp,i+1,digits);
                temp.pop_back();
            }
        }
    }
    vector<string> letterCombinations(string digits) {
        if(digits.size()==0) return ans;
        check("",0,digits);
        return ans;
    }
};