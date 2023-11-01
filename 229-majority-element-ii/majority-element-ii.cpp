class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        // int n=nums.size();
        // vector<int>ans;
        // int count=1,s=n/3,i;
        // for(i=1;i<n;i++){
        //     if(nums[i]==nums[i-1]) count++;
        //     else{
        //         cout<<i<<endl;
        //         if(count>s) ans.push_back(nums[i-1]);
        //         count=1;
        //     }
        // }
        // if(count>s) ans.push_back(nums[i-1]);
        // return ans;
        int n=nums.size();
        int el1,el2,count1=0,count2=0,i,s=n/3;
        vector<int>ans;
        for(i=0;i<n;i++){
            if(count1==0 && el2!=nums[i]) count1=1, el1=nums[i];
            else if(count2==0 && el1!=nums[i]) count2=1, el2=nums[i];
            else if(el1==nums[i]) count1++;
            else if(el2==nums[i]) count2++;
            else count1--, count2--;
        }
        count1=0,count2=0;
        for(i=0;i<n;i++){
            if(nums[i]==el1) count1++;
            else if(nums[i]==el2) count2++;
        }
        if(count1>s) ans.push_back(el1);
        if(count2>s) ans.push_back(el2);
        return ans;
    }
};