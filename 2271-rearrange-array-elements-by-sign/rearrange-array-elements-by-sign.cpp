class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
    int n=nums.size(),i,j=0,k=1;
    vector<int> pos(n);
    for(i=0;i<n;i++){
        if(nums[i]>0) pos[j]=nums[i], j+=2;
        else pos[k]=nums[i], k+=2;
    }
    return pos;   
    }
};
