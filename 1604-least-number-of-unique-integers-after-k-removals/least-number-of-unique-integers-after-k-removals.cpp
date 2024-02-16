class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int,int>mp;
        for(auto x: arr) mp[x]++;
        vector<int>v;
        for(auto a :mp) v.push_back(a.second);
        sort(v.begin(),v.end());
    while(k>0){
        k-=v[0];
        if(k>=0) v.erase(v.begin());
    }
    return v.size();
    }
};