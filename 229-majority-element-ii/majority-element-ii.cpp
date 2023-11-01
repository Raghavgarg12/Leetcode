class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<int>ans;
        int count=1,s=n/3,i;
        for(i=1;i<n;i++){
            if(nums[i]==nums[i-1]) count++;
            else{
                cout<<i<<endl;
                if(count>s) ans.push_back(nums[i-1]);
                count=1;
            }
        }
        if(count>s) ans.push_back(nums[i-1]);
        return ans;
    }
};