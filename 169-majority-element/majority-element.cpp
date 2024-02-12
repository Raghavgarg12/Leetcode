class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        // unordered_map<int, int> m;
        // for(int i = 0; i < n; i++) m[nums[i]]++;
        // n = n/2;
        // for(auto x: m) if(x.second > n) return x.first;
        // return 0;
        int count=1,element=nums[0];
        for(int i=1;i<n;i++){
            if(nums[i]==element) count++;
            else count--;
            if(count<=0) {
                element=nums[i];
                count=1;
            }
        }
        return element;
    }
};