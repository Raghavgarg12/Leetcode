#include<iostream>
using namespace std;
class Solution {
public:
    vector<int> ans;
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> num;
        int c=nums.size();
        int i,d;
        // sort(nums.begin(),nums.end());
        for(i=0;i<c;i++)
        {
            d=target-nums[i];
            if(num.find(d)!= num.end())
                return {num[d],i};
            num[nums[i]] = i;
        }
        // while(a<b){
        //     if(nums[a]+nums[b]==target)
        //         return {a,b};
        //     else if(nums[a]+nums[b] < target)
        //         a=a+1;
        //     else 
        //         b=b-1;
        // }
        return {};
        // ans = {a,b};
        // return ans;
    //     for(i=1;i<c;i++)
    //     {
    //         for(j=0;j<c;j++)
    //         { 
    //             a=nums[j];
    //             b=nums[i];
    //             if(i!=j && a+b == target)
    //             {
    //             //int d[2]={i,j};
    //                 ans = {i,j};
    //                 return ans;
    //             }
    //         }
    //     }
    //     return ans;
     }
};