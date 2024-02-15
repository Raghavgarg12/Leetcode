class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        int n=nums.size();
        if(n<3) return -1;
        sort(nums.begin(),nums.end());
        long long sum = accumulate(nums.begin(), nums.end()-1, 0LL);
        cout<<sum<<endl;
        for(int i=n-1;i>=2;i--){
            if(sum>nums[i]) {
                cout<<"yes";
                return sum+nums[i];
            }
            else sum-=nums[i-1];
        }
        return -1;
        
    }
};