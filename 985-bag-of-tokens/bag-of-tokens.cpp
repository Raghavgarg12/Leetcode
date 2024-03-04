class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(),tokens.end());
        int r=tokens.size()-1;
        int l=0,score=0,ans=0;
        while(l<=r){
            if(power>=tokens[l]){
                power-=tokens[l];
                score++;
                l++;
            }
            else if(score>0){
                power+=tokens[r];
                r--;
                score--;
            }
            else break;
            ans=max(ans,score);
        }
        return ans;
    }
};