// class Solution {
// public:
//     int maxFrequency(vector<int>& nums, int k) {
//         sort(nums.begin(),nums.end());
//         int n=nums.size();
//     //     int i=n-2,ans=1;
//     //     while(k>=(nums[n-1]-nums[i])){
//     //         ans++;
//     //         k=k-(nums[n-1]-nums[i]);
//     //         i--;
//     //         if(i<0) break;
//     //     }
//     //     cout<<i;
//     //     return ans;
//         int i,ans=0;
//         unordered_map<int,int>mp;
//         for(i=0;i<n-1;i++) mp[i]=nums[i+1]-nums[i];
//         i=0;
//         while(k>=0){
//             ans++;
//             k=k-mp[i]*(i+1);
//             cout<<k<<endl;
//             i++;
//             if(i>=n) break;
//         }
//         return ans;
//     }
// };
class Solution {
public:
    int maxFrequency(vector<int> &nums, int k) {
        // support variables
        int res = 0, len = nums.size();
        long tot = 0, curr;
        // preparing nums and parsing it
        sort(begin(nums), end(nums));
        for (int i = 0, j = 0, currLen = 0; j < len; j++) {
            // storing curr and adding it to the window
            curr = nums[j];
            currLen++;
            tot += curr;
            // making sure we can have curr in the window
            while (curr * currLen - tot > k) {
                tot -= nums[i++];
                currLen--;
            }
            // updating res
            res = max(res, currLen);
        }
        return res;
    }
};