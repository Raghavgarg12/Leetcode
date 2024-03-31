// class Solution {
// public:
//     long long countSubarrays(vector<int>& nums, int minK, int maxK) {
//         int n = nums.size();
//         int start=0,end,cmin=0,cmax=0,ans=0;
//         for(end=0;end<n;end++){
//             if(nums[end]==minK) cmin++;
//             if(nums[end]==maxK) cmax++;
//             if(nums[end]>maxK || nums[end]<minK){
//                 while(cmin>0 && cmax>0 && end>=start){
//                     if(nums[start]==minK) cmin--;
//                     if(nums[start]==maxK) cmax--;
//                     start++;
//                     ans++;
//                 }
//                 end++;
//             }
//             if(cmin>0 && cmax>0) ans++;
//         }
//         return ans;
//     }
// };
class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        long long res = 0;
        int bad_idx = -1, left_idx = -1, right_idx = -1;

        for (int i = 0; i < nums.size(); ++i) {
            if (!(minK <= nums[i] && nums[i] <= maxK)) {
                bad_idx = i;
            }

            if (nums[i] == minK) {
                left_idx = i;
            }

            if (nums[i] == maxK) {
                right_idx = i;
            }

            res += max(0, min(left_idx, right_idx) - bad_idx);
        }

        return res;
    }
};