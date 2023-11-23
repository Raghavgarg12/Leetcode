class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
    int n=nums.size();
    int l=0,r=n-1,mid;
    if(n<2) return nums[0];
    while(l<=r)
    {
        mid=(l+r)/2;
        cout<<mid<<endl;
        if(mid>0 && mid<n-1)
        {
            if(nums[mid]==nums[mid-1])  //12241
            {
                if(mid%2==0)
                {
                    cout<<'1';
                    r=mid-1;
                    continue;
                }
                else
                {
                    cout<<'2';
                    l=mid+1;
                    continue;
                }
            }
            else if(nums[mid]==nums[mid+1])
            {
                if(mid%2==0)
                {
                    cout<<'3';
                    l=mid+1;
                    continue;
                }
                else
                {
                    cout<<'4';
                    r=mid-1;
                    continue;
                }
            }
            else return nums[mid];   
        }
        else return nums[mid];   
    }
    // int result = 0;
    // for (int num : nums) result ^= num; // XOR operation
    return nums[mid];
    }
};