// class Solution {
// public:
//     void nextPermutation(vector<int>& nums) {
//         int n=nums.size();
//         int i=n-1,k=n-1;
//         while(i>0 && nums[i]<=nums[i-1]) i--;
//         i--;
//         cout<<i;
//         if(i<0) reverse(nums.begin(),nums.end());
//         else{
//         while(nums[k]<=nums[i]) k--;
//         cout<<k;
//         swap(nums[i],nums[k]);
//         reverse(nums.begin()+i+1,nums.begin()+n);        
//         }
//     }
// };
class Solution {
public:
   void nextPermutation(vector<int>& nums) {
    int n = nums.size();
    
    // Step 1: Find the largest value of i such that nums[i-1] < nums[i]
    int i = n - 1;
    while (i > 0 && nums[i-1] >= nums[i])
        i--;
    
    // If i is 0, it means the array is in descending order, so we reverse it to get the smallest permutation
    if (i == 0) {
        reverse(nums.begin(), nums.end());
        return;
    }
    
    // Step 2: Find the largest value of j such that nums[i-1] < nums[j]
    int j = n - 1;
    while (nums[j] <= nums[i-1])
        j--;
    
    // Step 3: Interchange nums[i-1] and nums[j]
    swap(nums[i-1], nums[j]);
    
    // Step 4: Reverse the numbers from index i to the end
    reverse(nums.begin() + i, nums.end());
}

};