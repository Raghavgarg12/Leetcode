class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=nums.size();
        if (n==1) return nums[0];
        sort(nums.begin(),nums.end());
        int i=0;
        set<int> s;
        for (int x : nums)
            s.insert(x);
        int sum1= 2*accumulate(s.begin(),s.end(),0);
        int sum2= accumulate(nums.begin(),nums.end(),0);
        return (sum1-sum2);
        // for(i=0;i<n;i+=2)
        // {
        //     if(nums[i]!=nums[i+1]) return nums[i];
        // }
        // return 0;
    }
};