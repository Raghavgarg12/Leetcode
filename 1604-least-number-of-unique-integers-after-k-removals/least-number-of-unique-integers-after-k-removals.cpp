class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int,int>mp;
        for(auto x: arr) mp[x]++;
        vector<int>v;
        for(auto a :mp) v.push_back(a.second);
        sort(v.begin(),v.end());
        // std::vector<std::pair<int, int>> fv(mp.begin(), mp.end());
    // Sort the vector based on frequencies (second values) in descending order
    // std::sort(fv.begin(), fv.end(), [](const auto& left, const auto& right) {
    //     return left.second < right.second;
    // });
    // int n=v.size();
    // for(int i=0;i<n;i++){
    //     if(k>=)
    // }
    while(k>0){
        k-=v[0];
        if(k>=0) v.erase(v.begin());
    }
    return v.size();
    }
};