class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int i=0,ans=0;
        int count=0;
        for (i=0;i<n;i++)
        {
            
            if(nums[i]==1)
                count++;
            ans=max(ans,count);
            if(nums[i]==0)
            {
                count=0;
            }
        }
        return ans;
    }
};