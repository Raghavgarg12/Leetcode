class Solution {
public:
    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>arr;
        int temp=0,i=1;
        for(int x:nums){
            int ini=x;
            if(x==0) {
                arr[0]=mapping[0];
                continue;
            }
            while(x>0){
                temp=temp+mapping[(x%10)]*i;
                x/=10;
                i*=10;
            }
            arr[ini]=temp;
            temp=0;
            i=1;
        }
        sort(nums.begin(),nums.end(),[&](int a, int b){
            return arr[a]<arr[b];
        });
        return nums;
    }
};
