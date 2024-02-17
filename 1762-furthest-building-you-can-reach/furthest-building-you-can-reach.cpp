class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        int n = heights.size();
        if(n<=ladders) return n-1;
        vector<int>h;
        int x;
        // vector to store difference of heights
        for(int i=1;i<n;i++){
            x=heights[i]-heights[i-1];
            if(x>0) h.push_back(x);
            else h.push_back(0);
        }
        // while(true){
        //     vector<int>h2(h);
        //     sort(h2.begin(),h2.end());
        //     if(accumulate(h2.begin(),h2.begin()+h2.size()-ladders,0LL)>bricks) h.pop_back();
        //     else return h2.size();
        // }
        // return 0;
        int left = 0;
        int right = n - 1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            std::vector<int> h2(h.begin(), h.begin() + mid);
            std::sort(h2.begin(), h2.end());
            if (std::accumulate(h2.begin(), h2.begin() + std::max(0, mid - ladders), 0) > bricks) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }

        return left-1;
    }
};