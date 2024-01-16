class Solution {
public:
    bool rotateString(string s, string goal) {
        int n = s.length(),i;
        char k;
        if(n!=goal.length()) return false;
        if(s==goal) return true;
        s+=s;
        if(s.find(goal)<s.size()) return true;
        // for(i=0;i<n;i++){
        //     k=s.at(0);
        //     s.erase(0,1);
        //     s=s+k;
        //     if(s==goal) return true;
        // }
        return false;
    }
};