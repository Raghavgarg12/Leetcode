class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string,int>mp;
        int temp=0;
        for(auto x:arr){
            mp[x]++;
        }
        for (auto x:arr){
            if(mp[x]==1) temp++;
            if(temp==k) return x;
        }
        return "";
    }
};