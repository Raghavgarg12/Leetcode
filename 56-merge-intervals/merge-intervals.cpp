class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n=intervals.size(), m=intervals[0].size();
        int i;
        if(n<2) return intervals;
        sort(intervals.begin(),intervals.end());
        vector<vector<int>>ans;
        ans.push_back(intervals[0]);
        for(i=1;i<n;i++){
            if(intervals[i][0]<=ans.back()[1]){
                ans.back()[1]=max(intervals[i][1],ans.back()[1]);
                ans.back()[0]=min(intervals[i][0],ans.back()[0]);
            }
            else ans.push_back(intervals[i]);
        }
        return ans;
    }
};