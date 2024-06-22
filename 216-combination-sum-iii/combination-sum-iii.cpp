class Solution {
public:
vector<vector<int>>ans;
    void check(vector<int>temp,int start, int k, int n, vector<int>nums){
        if(k==0 && n==0) {
            ans.push_back(temp);
            return;
        }
        for(int i=start;i<nums.size() && n>0;i++){
            temp.push_back(nums[i]);
            check(temp,i+1,k-1,n-nums[i],nums);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int>nums={1,2,3,4,5,6,7,8,9};
        vector<int>temp;
        check(temp,0,k,n,nums);
        return ans;
    }
};