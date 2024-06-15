// class Solution {
// public:
//     int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
//         int ans=0;
//         int i=0;
//         priority_queue<int>pq;
//         while(k>0){
//             while(capital[i]<=w && i<capital.size()) i++;
//             if(i==0 || capital[i-1]==-1) return w;
//             cout<<i<<" ";
//             w=profits[i-1]+w;
//             cout<<w<<endl;
//             capital[i-1]=-1;
//             k--;
//             i=0;
//         }
//         return w;
//     }
// };
class Solution {
public:
    using int2 = pair<int, int>;
    static int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) 
    {
        const int n= profits.size();
        vector<int2> cp(n);
        for (int i = 0; i < n; i++) 
            cp[i] = {capital[i], profits[i]};
        sort(cp.begin(), cp.end());
        priority_queue<int> pq;
        int curr=0;
        for (int i = 0; i<k; i++) {
            for ( ; curr<n && cp[curr].first<=w; curr++)
                pq.push(cp[curr].second);
            if (!pq.empty()) {
                w += pq.top();
                pq.pop();
            }
            else break;
        }
        return w;
    }
};