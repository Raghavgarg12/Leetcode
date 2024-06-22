class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int n=nums.size(),temp=0;
        int l=0,count1=0,count2=0,ans=0;
        for(int i=0;i<k;i++){
            if(nums[i]%2==1) temp++;
        }
        for(int i=k;i<=n;i++){
            if(temp==k){
                while(nums[l]%2==0){
                    l++;
                    count1++;
                }
                l++;
                temp--;
                while(i<n && nums[i]%2==0){
                    count2++;
                    i++;
                }
                ans+=(count1+1)*(count2+1);
                count1=0;
                count2=0;
            }
            if(i<n && nums[i]%2==1) temp++;
        }
        return ans;
    }
};