class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int n = sandwiches.size();
        int i=0,j=0,ans=0;
        while(i<n){
            if(students[i]==sandwiches[j]){
                n=students.size();
                j++;
                ans++;
            }
            else{
                students.push_back(students[i]);
            }
            i++;
        }
        return sandwiches.size()-ans;
    }
};