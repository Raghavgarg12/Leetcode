using namespace std;
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int s=accumulate(nums.begin(),nums.end(),0);
        int sum=(n*(n+1))/2;
        return abs(s-sum);
    }
};