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
            if (i == m) return j-m;
        }
        return (i == m) ? j-1 : -1;
    }
};