class Solution {
public:
    bool judgeSquareSum(int c) {
        long long l=0,r=sqrt(c);
        long long temp=0;
        while(l<=r){
            temp=l*l+r*r;
            if(temp==c) return true;
            else if(temp<c) l++;
            else r--;
        }
        return false;
    }
};
// class Solution {
// public:
//     bool judgeSquareSum(int c) {
//         for (int divisor = 2; divisor * divisor <= c; divisor++) {
//             if (c % divisor == 0) {
//                 int exponentCount = 0;
//                 while (c % divisor == 0) {
//                     exponentCount++;
//                     c /= divisor;
//                 }
//                 if (divisor % 4 == 3 && exponentCount % 2 != 0) {
//                     return false;
//                 }
//             }
//         }
//         return c % 4 != 3;
//     }
// };