// class Solution {
// public:
//     bool predictTheWinner(vector<int>& nums) {
//         int n = nums.size();
//         if(n<3) return true;
//         int sum1=0,sum2=0,left=0,right=n-1;
//         while(left<right-1){
//             if((nums[left]<nums[right-1] && nums[right]<nums[right-1])||(nums[left]<nums[left+1] && nums[right]<nums[left+1])){
//                 if(nums[left+1]<nums[right-1]){
//                     sum1+=nums[left];
//                     left++;
//                     cout<<"here5";
//                 }
//                 else{
//                 sum1+=nums[right];
//                 right--;
//                 cout<<"here6";
//                 }
//             }
//             else{
//                 if(nums[right]<nums[left]){
//                     sum1+=nums[left];
//                     left++;
//                     cout<<"here7";
//                 }
//                 else{
//                     sum1+=nums[right];
//                     right--;
//                     cout<<"here8";
//                 }
//             }
//             if((nums[left]<nums[right-1] && nums[right]<nums[right-1])||(nums[left]<nums[left+1] && nums[right]<nums[left+1])){
//                 if(nums[left+1]<nums[right-1]){
//                     sum2+=nums[left];
//                     left++;
//                     cout<<"here1";
//                 }
//                 else{
//                 sum2+=nums[right];
//                 right--;
//                 cout<<"here2";
//                 }
//             }
//             else{
//                 if(nums[right]<nums[left]){
//                     sum2+=nums[left];
//                     left++;
//                     cout<<"here3";    
//                 }
//                 else{
//                     sum2+=nums[right];
//                     right--;
//                     cout<<"here4";
//                 }
//             }
//             cout<<sum1<<" "<<sum2<<endl;
//         }
//         sum1+=max(nums[left],nums[right]);
//         sum2+=min(nums[left],nums[right]);
//         return sum1>=sum2;
//     }
// };
class Solution {
public:
    int n;
    int t[23][23];
    int solve(vector<int>& nums, int l, int r) {
        
        if(l > r)
            return 0;
        
        if(l == r)
            return nums[l];
        
        if(t[l][r] != -1)
            return t[l][r];
        
        int take_left  = nums[l] + min(solve(nums, l+2, r), solve(nums, l+1, r-1));
        
        int take_right = nums[r] + min(solve(nums, l, r-2), solve(nums, l+1, r-1));
        
        
        return t[l][r] = max(take_left, take_right);
        
    }
    
    bool predictTheWinner(vector<int>& nums) {
        
        memset(t, -1, sizeof(t));
        
        n = nums.size();
        
        
        int total = accumulate(begin(nums), end(nums), 0);
        
        int player1 = solve(nums, 0, n-1);
        int player2 = total - player1;
        
        return player1 >= player2;
    }
};