class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>nums;
        vector<int> temp;
        if(numRows==0) return {};
        nums.push_back({1});
        for(int i=1;i<numRows;i++){
            temp.push_back(nums[i-1][0]);
            for(int j=1;j<i;j++){
                temp.push_back(nums[i-1][j]+nums[i-1][j-1]);
            }
            temp.push_back(nums[i-1][i-1]);
            nums.push_back(temp);
            temp.erase(temp.begin(),temp.end());
        }
        return nums;
    }
};