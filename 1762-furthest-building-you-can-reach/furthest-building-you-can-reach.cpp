// class Solution {
// public:
//     int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
//         int n = heights.size();
//         if(n<=ladders) return n-1;
//         vector<int>h;
//         int x;
//         // vector to store difference of heights
//         for(int i=1;i<n;i++){
//             x=heights[i]-heights[i-1];
//             if(x>0) h.push_back(x);
//             else h.push_back(0);
//         }
//         int left = 0;
//         int right = n - 1;
//         while (left <= right) {
//             int mid = left + (right - left) / 2;
//             std::vector<int> h2(h.begin(), h.begin() + mid);
//             std::sort(h2.begin(), h2.end());
//             if (std::accumulate(h2.begin(), h2.begin() + std::max(0, mid - ladders), 0) > bricks) {
//                 right = mid - 1;
//             } else {
//                 left = mid + 1;
//             }
//         }
//         return left-1;
//     }
// };
class Solution {
public:
    int furthestBuilding(vector<int>& h, int b, int l) {
        // Priority Queue for storing the bricks used in each step in decreasing order (Max at top)
        priority_queue<int> p;
        int i=0, diff =0; 
        for(i=0; i<h.size()-1; i++){ 
            diff = h[i+1]-h[i];
            if(diff <= 0) continue;
            b -= diff; 
            p.push(diff); 
            if(b < 0){
                b += p.top(); 
                p.pop(); 
                l--;
            }
            if(l < 0) break;
        }
        return i;
    }
};

