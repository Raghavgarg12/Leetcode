// class Solution {
// public:
//     int longestSubarray(vector<int>& nums, int limit) {
//         int n=nums.size();
//         int mini=nums[0],maxi=nums[0],ans=1,l=0,temp=1;
//         for(int i=1;i<n;i++){
//             mini=min(nums[i],mini);
//             maxi=max(nums[i],maxi);
//             if(maxi-mini>limit){
//                 while(l<i && (nums[l]!=maxi && nums[l]!=mini)){
//                     l++;
//                     temp--;
//                 }
//                 if(l<i) l++;
//                 temp--;
//                 if(nums[l-1]==maxi) maxi=*max_element(nums.begin()+l,nums.begin()+i);
//                 else mini=*min_element(nums.begin()+l,nums.begin()+i);
//             }
//             temp++;
//             ans=max(ans,temp);
//         }
//         return ans;
//     }
// };
class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
        deque<int> maxDeque, minDeque;
        int left = 0, right;
        int maxLength = 0;

        for (right = 0; right < nums.size(); ++right) {
            // Maintain the maxDeque in decreasing order
            while (!maxDeque.empty() && maxDeque.back() < nums[right]) {
                maxDeque.pop_back();
            }
            maxDeque.push_back(nums[right]);

            // Maintain the minDeque in increasing order
            while (!minDeque.empty() && minDeque.back() > nums[right]) {
                minDeque.pop_back();
            }
            minDeque.push_back(nums[right]);

            // Check if the current window exceeds the limit
            while (maxDeque.front() - minDeque.front() > limit) {
                // Remove the elements that are out of the current window
                if (maxDeque.front() == nums[left]) {
                    maxDeque.pop_front();
                }
                if (minDeque.front() == nums[left]) {
                    minDeque.pop_front();
                }
                ++left;
            }

            maxLength = max(maxLength, right - left + 1);
        }

        return maxLength;
    }
};