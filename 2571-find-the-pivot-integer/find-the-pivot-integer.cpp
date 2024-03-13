class Solution {
public:
    int pivotInteger(int n) {
        int a = (n*(n+1))/2;
        int b=0;
        for(int i=1;i<=n;i++){
            b+=i;
            if(a-b+i==b) return i; 
        }
        return -1;
    }
};