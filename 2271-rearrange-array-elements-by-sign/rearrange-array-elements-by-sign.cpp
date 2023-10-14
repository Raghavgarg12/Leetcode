class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
    int n=nums.size(),i,j=0,k=1;
    int arr[n];
    //vector<int> pos(n);
    // for(i=0;i<n;i++) if(nums[i]>0) pos.push_back(nums[i]); else neg.push_back(nums[i]);
    // nums.clear();
    // for(i=0;i<n/2;i++) nums.push_back(pos[i]), nums.push_back(neg[i]);
    for(i=0;i<n;i++){
        if(nums[i]>0) {
            arr[j]=nums[i];
            //pos.insert(pos.begin()+j,nums[i]);
            j+=2;
        }
        else {
            arr[k]=nums[i];
            //pos.insert(pos.begin()+k,nums[i]);
            k+=2;
        }
        cout<<j<<k<<endl;
    }
    vector<int> pos(arr,arr+n);
    return pos;   
    }
};