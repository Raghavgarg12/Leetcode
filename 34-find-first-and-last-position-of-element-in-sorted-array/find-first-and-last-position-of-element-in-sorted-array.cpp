// class Solution {
// public:
//     vector<int> searchRange(vector<int>& nums, int target) {
        
//         int n = nums.size();
//         int i;
//         vector<int> ans;
//         for(i=0;i<n;i++){
//             if(nums[i]==target){
//                 if(nums[i-1]!=target) ans.push_back(i);
//                 if(nums[i+1]==target) continue;
//                 else(ans.push_back(i));
//             }
//         }
//         if(ans.size()==0) return [-1,-1];
//         else return ans;
//     }
// };
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
        
        if (result[0] == -1) {
            return result;
        }
        
        for (int i = n - 1; i >= 0; --i) {
            if (nums[i] == target) {
                result[1] = i;
                break;
            }
        }
        
        return result;
    }
};