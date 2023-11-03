class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        int i,j,low,high;
        long long d;
        for(i=0;i<n-3;i++){
            for(j=i+1;j<n-2;j++){
                d=(long long)target-(nums[i]+nums[j]);
                low=j+1;
                high=n-1;
                while(low<high){
                    if(d<(nums[low]+nums[high])) high--;
                    else if(d>(nums[low]+nums[high])) low++;
                    else {
                        ans.push_back({nums[i],nums[j],nums[low],nums[high]});
                        int tempIndex1 = low, tempIndex2 = high;
                        while(low < high && nums[low] == nums[tempIndex1]) low++;
                        while(low < high && nums[high] == nums[tempIndex2]) high--;
                    }
                }
                while(j+1 < n && nums[j] == nums[j+1]) j++;
            }
            while(i+1 < n && nums[i] == nums[i+1]) i++;
        }
        return ans;
    }
};