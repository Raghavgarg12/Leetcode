class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        int maxElement = *max_element(arr1.begin(), arr1.end());
        vector<int> count(maxElement + 1);
        for (int x : arr1) count[x]++;
        vector<int> result;
        for (int x : arr2) {
            while (count[x] > 0) {
                result.push_back(x);
                count[x]--;
            }
        }
        for (int num = 0; num <= maxElement; num++) {
            while (count[num] > 0) {
                result.push_back(num);
                count[num]--;
            }
        }
        return result;
    }
};