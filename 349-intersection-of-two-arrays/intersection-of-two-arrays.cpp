class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        std::unordered_set<int> set1(nums1.begin(), nums1.end());
        std::unordered_set<int> set2(nums2.begin(), nums2.end());
        vector<int>ans;
        for(const auto& x:set1){
            if(set2.find(x)!=set2.end()) ans.push_back(x);
        }
        return ans;
    }
};