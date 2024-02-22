// class Solution {
// public:
//     int findJudge(int n, vector<vector<int>>& trust) {
//         int l=trust.size();
//         // if(l==0){
//         //     if(n<2) return n;
//         //     else return -1;
//         // }
//         unordered_map<int,int>mp;
//         int ans=0;
//         for(int i=0;i<l;i++){
//             mp[trust[i][0]]--;
//             mp[trust[i][1]]++;
//             if(mp[trust[i][1]]>mp[ans]) ans=trust[i][1];
//         }
//         cout<<mp[ans];
//         if(mp[ans]==n-1) return ans;
//         return -1;
//     }
// };

class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
		vector<int> in(N + 1), out(N + 1);
		for (auto a : trust) {
			++out[a[0]];
			++in[a[1]];
		}
		for (int i = 1; i <= N; ++i) {
			if (in[i] == N - 1 && out[i] == 0) return i;
		}
		return -1;
    }
};
