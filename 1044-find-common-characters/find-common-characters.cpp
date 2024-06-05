class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        int n = words.size();
        vector<int> arr1(26,0);
        vector<int> arr2(26,0);
        vector<string>results;
        for(auto x: words[0]) arr1[x-97]++;
        for(int i=1;i<n;i++){
            for(auto x: words[i])
            {
                arr2[x-97]++;
            }
            for(int j=0;j<26;j++){
                arr1[j]=min(arr1[j],arr2[j]);
                arr2[j]=0;
            }
        }
        for(int i=0;i<26;i++){
            for(int j=0;j<arr1[i];j++){
                results.push_back(string(1,i+97));
            }
        }
        return results;

    }
};