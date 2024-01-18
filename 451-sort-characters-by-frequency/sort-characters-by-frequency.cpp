class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> m;
        for(char _s: s) m[_s]++;
        vector<pair<int,char>> v;
        for(auto _m: m) v.push_back({_m.second,_m.first});
        sort(rbegin(v),rend(v));
        s.clear();
        for(auto _v: v) s += string(_v.first,_v.second);
        return s;
    }
};