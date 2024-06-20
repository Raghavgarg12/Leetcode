// class Solution {
// public:
//     int maxDistance(vector<int>& position, int m) {
//         sort(position.begin(),position.end());
//         int n=position.size();
//         int l=1,r=position[n-1],mid=0,ans=0;
//         while(l<=r){
//             mid=(l+r)/2;
//             int ball=1;
//             int temp=0;
//             for(int i=1;i<n && ball<m;i++){
//                 if(position[i]-position[temp]>=mid) {
//                     ball++;
//                     temp=i;
//                 }
//             }
//             if(m==ball) {
//                 l=mid+1;
//                 ans=mid;
//             }
//             else r=mid-1;
//         }
//         return ans;
//     }
// };
class Solution {
public:
    // Check if we can place 'm' balls at 'position'
    // with each ball having at least 'x' gap.
    bool canPlaceBalls(int x, vector<int> &position, int m) {
        // Place the first ball at the first position.
        int prevBallPos = position[0];
        int ballsPlaced = 1;

        // Iterate on each 'position' and place a ball there if we can place it.
        for (int i = 1; i < position.size() && ballsPlaced < m; ++i) {
            int currPos = position[i];
            // Check if we can place the ball at the current position.
            if (currPos - prevBallPos >= x) {
                ballsPlaced += 1;
                prevBallPos = currPos;
            }
        }
        // If all 'm' balls are placed, return 'true'.
        return ballsPlaced == m;
    }

    int maxDistance(vector<int> &position, int m) {
        int answer = 0;
        int n = position.size();
        sort(position.begin(), position.end());

        // Initial search space.
        int low = 1;
        int high = ceil(position[n - 1] / (m - 1.0));
        while (low <= high) {
            int mid = low + (high - low) / 2;
            // If we can place all balls having a gap at least 'mid',
            if (canPlaceBalls(mid, position, m)) {
                // then 'mid' can be our answer,
                answer = mid;
                // and discard the left half search space.
                low = mid + 1;
            } else {
                // Discard the right half search space.
                high = mid - 1;
            }
        }
        return answer;
    }
};