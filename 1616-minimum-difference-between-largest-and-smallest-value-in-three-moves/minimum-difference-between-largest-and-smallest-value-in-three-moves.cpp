// class Solution {
// public:
//     int minDifference(vector<int>& nums) {
//     int n = nums.size();
//     sort(nums.begin(),nums.end());
//     int i=0,l=0,r=n-1;
//     for(i=0;i<3;i++){
//         int a = nums[l+1]-nums[l];
//         int b = nums[r]-nums[r-1];
//     }
//     }
// };
// // 2 3 4 5
class Solution {
public:
    int minDifference(vector<int>& nums) {
        int numsSize = nums.size();
        if (numsSize <= 4) return 0;

        sort(nums.begin(), nums.end());

        int minDiff = INT_MAX;
        for (int left = 0, right = numsSize - 4; left < 4; left++, right++) {
            minDiff = min(minDiff, nums[right] - nums[left]);
        }
        return minDiff;
    }
};