class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int n=arr.size() -1;
        int a=0;
        int b=n;
        vector<int> ans;
        while(b-a+1 != k)
        {
            if(abs(arr[a]-x) > abs(arr[b]-x)) a=a+1;
            else b=b-1;
        }
        while(a<=b)
        {
            ans.push_back(arr[a]);
            a++;
        }
        return ans;    
    }
};