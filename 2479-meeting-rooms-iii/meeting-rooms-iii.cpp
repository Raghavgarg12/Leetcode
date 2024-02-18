// class Solution {
// public:
//     int mostBooked(int n, vector<vector<int>>& meetings) {
//         if(n<2) return n-1;
//         int m =meetings.size();
//         vector<int>arr(n,0);
//         priority_queue<int,vector<int>,greater<int>>p;
//         priority_queue<int,vector<int>,greater<int>>q;

//     }
// };
#define ll long long
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

class Solution {
public:
    int mostBooked(int n, vector<vector<int>>& meetings) {
        fast

        // stores all meetings to be held sorted by start time
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> m;
        for (auto & x : meetings)
            m.push({x[0] - INT_MAX, x[1] - INT_MAX});   // shift by INT_MAX to avoid overflow
        
        // stores all empty rooms sorted by their numbers
        priority_queue<int, vector<int>, greater<int>> r;
        for (int i = 0; i < n; i++)
            r.push(i);

        // stores current meetings and their assigned rooms sorted by their end times
        priority_queue<pair<ll, int>, vector<pair<ll, int>>, greater<pair<ll, int>>> c;

        // stores how many times a room held a meeting for each room
        map<int, int> f;
        
        while (!m.empty()) {
            pair<int, int> curr = m.top();  // next meeting to be held
            m.pop();
            
            ll delay = 0;   // store the delay time if exist

            // pop all ended meetings and free their rooms
            while (!c.empty()) {
                if (c.top().first <= curr.first) {
                    r.push(c.top().second);
                    c.pop();
                } else break;
            }

            // if there is no free rooms, meaning that there is a delay
            if (r.empty()) {
                pair<ll, int> met = c.top();
                c.pop();
                r.push(met.second);
                delay = met.first - curr.first;
            }

            c.push({curr.second + delay, r.top()}); // store the end time and the assigned room
            f[r.top()]++;   // increment the frequency
            r.pop();    // remove the room from free-rooms list
        }

        // get the answer
        int ans = -1, mxf = -1;
        for (auto & [x, y] : f) {
            if (y > mxf) {
                mxf = y;
                ans = x;
            }
        }
        return ans;
    }
};