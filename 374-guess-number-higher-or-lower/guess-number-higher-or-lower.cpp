/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int i=0;
    int guessNumber(int n) {
        int high=n;
        int low=0;
        long int a=n/2 +1;
        int k=n/4;
        while(guess(a)!=0){
            a = low + (high-low)/2 ;
            i=guess(a);
            if(i==1)
                low=a+1;
            else
                high=a-1;
        }
        return a;
    }
};