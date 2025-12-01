class Solution {
public:
    string reorganizeString(string s) {
        priority_queue<pair<int,char>>pq;
        unordered_map<char,int>map;
        int n = s.length();
        int i=0;
        string ans="";
        for(i=0;i<n;i++){
            map[s[i]]++;
        }
        for (auto const& [key, value] : map) {
            pq.push({value, key});
        }
        while(!pq.empty()){
            auto top = pq.top();
            pq.pop();
            if (ans!=""){
                if(ans.back()==top.second){
                    if(pq.empty()) return "";
                    else{
                        auto top_2 = pq.top();
                        pq.pop();
                        ans+=top_2.second;
                        top_2.first--;
                        if (top_2.first!=0) pq.push(top_2);
                    }
                }
            }
            ans+=top.second;
            top.first--;
            if(top.first!=0) pq.push(top);
        }
        return ans;
    }
};