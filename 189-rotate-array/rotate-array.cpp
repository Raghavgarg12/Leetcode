class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int i,n=nums.size(),a=0;
        k=k%n;
        reverse(nums.begin(),nums.begin()+n);
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());
        // reverse(nums,0,k-1);
        //int a=nums[n-1],j=0,b,l=j+k,z;
        // while(k>0){
        //     a=nums[n-1];
        //     nums.pop_back();
        //     nums.insert(nums.begin(),a);
        //     --k;
        //             }
        // b=nums[0];
        // a=nums[k];
        // for(i=0;i<n;i++){
        //     nums[l]=b;
        //     b=a;
        //     if(n%2==0 && i==n/2) j+=1;
        //     j=j+k;
        //     if(j>=n) j=j-n;
        //     //cout<<j;
        //     l=j+k;
        //     if(l>=n) l=l-n;
        //     //cout<<l<<endl;
        //     a=nums[l];
        //     for(z=0;z<n;z++) cout<<nums[z]<<" "; cout<<endl;
        // }
    }
};