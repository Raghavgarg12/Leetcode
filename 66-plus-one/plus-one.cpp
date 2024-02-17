class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        unsigned long long num=0;
        vector<int>v;
        if(digits[n-1]==9){
            for(int i=n-1;i>=0;i--){
                if(digits[i]==9){
                    digits[i]=0;
                }   
                else{
                    digits[i]+=1;
                    i=0;
                }
            }
        }
        else digits[n-1]+=1;
        if(digits[0]==0) digits.insert(digits.begin(),1);
        return digits;
    }
};