class Solution {
public:
    int passThePillow(int n, int time) {
        if(time<n) return time+1;
        int pos=time/(n-1);
        int temp=time%(n-1);
        if(pos%2==0) return temp+1;
        else return n-temp;
    }
};