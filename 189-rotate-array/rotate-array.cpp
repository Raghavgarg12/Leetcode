class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int i,n=nums.size(),j=0;
        //int a=nums[n-1],j=0,b,l=j+k,z;
        vector<int> arr(n);
        // while(k>0){
        //     for(i=n-1;i>0;i--) nums[i]=nums[i-1];
        //     nums[0]=a;
        //     --k;
        //     // for(i=0;i<n;i++) cout<<nums[i];
        //     // cout<<endl;
        // }
        cout<<j<<endl;
        for(i=0;i<n;i++){
            j=i+k;
            arr[j%n]=nums[i];
        }
        nums=arr;
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