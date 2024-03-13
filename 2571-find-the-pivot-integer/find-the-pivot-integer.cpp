class Solution {
public:
    int pivotInteger(int n) {
        int a = (n*(n+1))/2;
        for(int i=0;i<=n;i++){
            int b = (i*(i+1))/2;
            if(a-b+i==b) return i; 
        }
        return -1;
    }
};