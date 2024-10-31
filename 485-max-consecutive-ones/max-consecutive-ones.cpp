class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int maxi=INT_MIN,temp=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                maxi=max(temp,maxi);
                temp=0;
            }
            else{
                temp++;
            }
        }
        return max(maxi,temp);
    }
};