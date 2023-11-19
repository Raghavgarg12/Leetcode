class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> result = {-1, -1};
        int n = nums.size();
        for (int i = 0; i < n; ++i) {
            if (nums[i] == target) {
                result[0] = i;
                break;
            }
        }
        if (result[0] == -1) return result;
        for (int i = n - 1; i >= 0; --i) {
            if (nums[i] == target) {
                result[1] = i;
                break;
            }
        }      
        return result;
    }
};