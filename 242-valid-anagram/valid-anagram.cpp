// class Solution {
// public:
//     bool isAnagram(string s, string t) {
//         unordered_map<char,int> map;
//         int n=s.length(),i;
//         if(n!=t.length()) return false;
//         for(i=0;i<n;i++){
//             map[s.at(i)]++;
//         }
//         for(i=0;i<n;i++){
//             if(map[t.at(i)]<=0) return false;
//             map[t.at(i)]--;
//         }
//         return true;
//     }
// };
class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        }
        int charCountS[26] = {0};
        int charCountT[26] = {0};
        for (char c : s) {
            charCountS[c - 'a']++;
        }
        for (char c : t) {
            charCountT[c - 'a']++;
        }
        return memcmp(charCountS, charCountT, sizeof(charCountS)) == 0;
    }
};