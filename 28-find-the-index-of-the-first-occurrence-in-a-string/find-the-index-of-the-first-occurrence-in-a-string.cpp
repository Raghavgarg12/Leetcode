class Solution {
public:
    int strStr(string haystack, string needle) {
            // return haystack.find(needle);
        int n=haystack.length(),m=needle.length();
        vector<int>pos(m, 0);
        int i=0,j=1;
        while(j<m){
            if(needle[i]==needle[j]){
                pos[j]=i+1;
                i++;
                j++;
            }
            else if(i) i=pos[i-1];
            else j++;
        }
        i=0;
        j=0;
        while(j<n && i<m){
            if(needle[i]==haystack[j]){
                i++;
                j++;
            }
            else if(i) i=pos[i-1];
            else j++;
            cout<<i<<endl;
            if (i == m) return j-m;
        }
        cout<<j<<endl;
        return (i == m) ? j-1 : -1;
//         int i,j=0;
//         for(i=0;i<n;i++){
//             if(haystack[i]==needle[j]) j++;
//             else j=0;
//             if(j==m) return i-j+1;
//         }
//         return -1;
    }
};
// class Solution {
// public:
//     int strStr(string h, string n) {
//         int n1=h.size(),n2=n.size();
//         if(n2>n1){
//             return -1;
//         }
//         for(int i=0;i<=(n1-n2);i++){
//             if(h[i]==n[0]){
//                 int j;
//                 for(j=i;j<i+n2;j++){
//                     if(h[j]!=n[j-i]){
//                         break;
//                     }
//                 }
//                 if(j==i+n2){return i;}
//             }
//         }
//         return -1;
//     }
// };