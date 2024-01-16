class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> map;
        int n=s.length(),i;
        if(n!=t.length()) return false;
        for(i=0;i<n;i++){
            map[s.at(i)]++;
        }
        for(i=0;i<n;i++){
            if(map[t.at(i)]<=0) return false;
            cout<<map[t.at(i)];
            map[t.at(i)]--;
        }
        return true;
    }
};