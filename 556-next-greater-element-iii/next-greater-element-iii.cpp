/**
Check if all the digits are in descending order.
If yes then return -1
Else store index of the digit where this pattern breaks
**/
class Solution {
public:
    int nextGreaterElement(int n) {
        string number = to_string(n);
        int length = number.size();
        int i=0;
        for (i=length-2;i>=0;i--){
            if(number[i]<number[i+1]){
                break;
            }
        }
        if (i<0) return -1;
        int j=length-1;
        while(j>=0 && number[j]<=number[i]) j--;
        swap(number[i],number[j]);
        reverse(number.begin()+i+1, number.end());
        long long output = stol(number);
        return output<=INT_MAX? output:-1;
    }
};
// 13443222
// 13222344