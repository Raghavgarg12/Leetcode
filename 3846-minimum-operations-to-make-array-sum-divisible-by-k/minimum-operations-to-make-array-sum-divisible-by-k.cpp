class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int n = accumulate(nums.begin(), nums.end(), 0);
        return n%k;
    }
};