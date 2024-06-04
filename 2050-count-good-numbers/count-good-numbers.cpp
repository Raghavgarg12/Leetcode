// class Solution {
// const int mod=1e9+7;
// public:
//     int countGoodNumbers(long long n) {
//         long long ans=1;
//         for(int i=0;i<n;i++){
//             if(i%2==0) {
//                 ans*=5;
//                 ans%=mod;
//             }
//             else {
//                 ans*=4;
//                 ans%=mod;
//             }
//         }
//         return ans%mod;
//     }
// };
#define mod 1000000007
class Solution {
private:
    long long power(long long x, long long n){
        if(n == 0) return 1;
        long long ans = power(x, n/2);
        ans *= ans;
        ans %= mod;
        if(n%2==1){
            ans *= x;
            ans %= mod;
        }
        return ans;
    }
public:
    int countGoodNumbers(long long n) {
        long long numberOfOddPlaces = n/2;
        long long numberOfEvenPlaces = n/2 + n%2;
        return (power(5, numberOfEvenPlaces) * power(4, numberOfOddPlaces))%mod;
    }
};