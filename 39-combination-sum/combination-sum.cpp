class Solution {
public:
    vector<vector<int>>ans;
    void check(vector<int>temp, int start, int target, vector<int> nums){
        if(0==target) {
            ans.push_back(temp);
            return;
        }
        for(int i=start;i<nums.size() && nums[i]<=target;i++){
            temp.push_back(nums[i]);
            check(temp, i, target-nums[i], nums);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>temp;
        sort(candidates.begin(),candidates.end());
        check(temp,0,target,candidates);
        return ans;
    }
};