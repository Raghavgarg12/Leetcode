// class Solution {
// public:
//     int maxProductDifference(vector<int>& nums) {
//         int n=nums.size();
//         int ans;
//         sort(nums.begin(),nums.end());
//         ans=-nums[0]*nums[1]+nums[n-1]*nums[n-2];
//         return ans;
//     }
// };
class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int firstBig = 0, secondBig = 0;
        int firstSmall = INT_MAX, secondSmall = INT_MAX;

        for (int n : nums) {
            if (n < firstSmall) {
                secondSmall = firstSmall;
                firstSmall = n;
            } else if (n < secondSmall) {
                secondSmall = n;
            }

            if (n > firstBig) {
                secondBig = firstBig;
                firstBig = n;
            } else if (n > secondBig) {
                secondBig = n;
            }
        }

        return firstBig * secondBig - firstSmall * secondSmall;        
    }
};