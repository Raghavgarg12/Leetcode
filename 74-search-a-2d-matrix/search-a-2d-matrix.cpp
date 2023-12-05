class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int low,high,i,mid,ans;
        int n=matrix.size();
        int m=matrix[0].size();
        for(i=0;i<n;i++)
        {
            low=matrix[0][0];
            high=matrix[i][m-1];
            if(low<=target && target<=high) break;
        }
        if(i==n) return false;
        low=0;
        high=m-1;
        while(low<=high)
        {
            mid=(low+high)/2;
            ans=matrix[i][mid];
            if(ans==target) return true;
            if(ans<target) low=mid+1;
            else high=mid-1;
        }
        return false;
    }
};