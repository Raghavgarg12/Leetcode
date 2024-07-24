class Solution {
public:
    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
        int n=nums.size();
        vector<pair<int,int>>arr;
        int temp=0,i=1;
        for(int j=0;j<n;j++){
            int x=nums[j];
            int ini=x;
            if(x==0) {
                arr.push_back({mapping[0],j});
                continue;
            }
            while(x>0){
                temp=temp+mapping[(x%10)]*i;
                x/=10;
                i*=10;
            }
            arr.push_back({temp,j});
            temp=0;
            i=1;
        }
        // sort(nums.begin(),nums.end(),[&](int a, int b){
        //     return arr[a]<arr[b];
        // });
        sort(arr.begin(),arr.end());
        vector<int>ans;
        for(auto x:arr){
            ans.push_back(nums[x.second]);
        }
        return ans;
    }
};
