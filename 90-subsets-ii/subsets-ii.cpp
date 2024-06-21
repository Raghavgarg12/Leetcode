class Solution {
public:
vector<vector<int>>ans;
    void check(vector<int>temp, int start, vector<int> &nums){
        ans.push_back(temp);
        if(temp.size()==nums.size()) return;
        for(int i=start;i<nums.size();i++){
            if(i>start && nums[i]==nums[i-1]) continue;
            temp.push_back(nums[i]);
            check(temp,i+1,nums);
            temp.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>arr;
        check(arr,0,nums);
        return ans;
    }
};