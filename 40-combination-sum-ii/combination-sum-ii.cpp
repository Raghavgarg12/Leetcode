class Solution {
public:
vector<vector<int>>ans;
    void check(vector<int>temp, int start, int target, vector<int>nums){
        if(target==0) {
            ans.push_back(temp);
            return;
        }
        for(int i=start;i<nums.size() && nums[i]<=target;i++){
            if(i>start && nums[i]==nums[i-1]) continue;
            temp.push_back(nums[i]);
            check(temp,i+1,target-nums[i],nums);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<int>temp;
        check(temp,0,target,candidates);
        return ans;
    }
};
//[1 1 2 2 5 6 7 10]