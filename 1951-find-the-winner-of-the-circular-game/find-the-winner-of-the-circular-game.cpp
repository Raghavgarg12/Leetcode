// class Solution {
// public:
//     int findTheWinner(int n, int k) {
//         vector<int>arr(n,0);
//         int i=0,count=1,temp=0;
//         while(temp<n-1){
//             if(i==n) i=0;
//             if(count==k){
//                 cout<<i<<endl;
//                 count=1;
//                 arr[i]=-1;
//                 i++;
//                 temp++;
//             }
//             else{
//                 if(arr[i]!=-1){
//                     i++;
//                     count++;
//                 }
//                 else i++;
//             }
//         }
//         for(int i=0;i<n;i++){
//             if(arr[i]==0)
//                 return i+1;
//         }
//         return 0;
//     }
// };
class Solution {
public:
    int findTheWinner(int n, int k) {
        // Initialize vector of N friends, labeled from 1-N
        vector<int> circle;
        for (int i = 1; i <= n; i++) {
            circle.push_back(i);
        }

        // Maintain the index of the friend to start the count on
        int startIndex = 0;

        // Perform eliminations while there is more than 1 friend left
        while (circle.size() > 1) {
            // Calculate the index of the friend to be removed
            int removalIndex = (startIndex + k - 1) % circle.size();

            // Erase the friend at removalIndex
            circle.erase(circle.begin() + removalIndex);

            // Update startIndex for the next round
            startIndex = removalIndex;
        }

        return circle.front();
    }
};