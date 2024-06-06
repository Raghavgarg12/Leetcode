class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        int n = hand.size();
        map<int,int>mp;
        if(n%groupSize!=0) return false;
        for(auto x: hand) mp[x]++;
        while(!mp.empty()){
            int curr = mp.begin()->first;
            for(int i=0;i<groupSize;i++){
                if(mp[curr+i]==0) return false;
                else mp[curr+i]--;
                if(mp[curr+i]==0) mp.erase(curr+i);
            }
        }
        return true;
    }
};