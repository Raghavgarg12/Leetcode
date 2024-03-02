class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans;
        for(auto x: nums) ans.push_back(x*x);
        sort(ans.begin(),ans.end());
        return ans;
        
    }
};