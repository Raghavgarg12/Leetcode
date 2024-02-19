class Solution {
public:
    bool isPowerOfTwo(int n) {
        return n > 0 && (n & (n - 1)) == 0;
        // if(a%b==0) return true;
        // return false;
        // if(n%2!=0) return false;
        // int x=0;
        // while(x<n){
        //     x=x*2;
        // }
    }
};