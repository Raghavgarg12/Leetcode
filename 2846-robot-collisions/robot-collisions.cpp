class Solution {
public:
    vector<int> survivedRobotsHealths(vector<int>& positions, vector<int>& health, string directions) {
        int n=positions.size();
        vector<int>indices(n),ans;
        stack<int>store;
        iota(indices.begin(),indices.end(),0);
        sort(indices.begin(),indices.end(),[&positions](int l, int r){return positions[l]<positions[r];});
       
        for(int i=0;i<positions.size();i++){
            int temp=indices[i];
            if(directions[temp]=='L'){
                while(!store.empty() && health[temp]!=0){
                    if(health[temp]==health[store.top()]){
                        health[store.top()]=0;
                        store.pop();
                        health[temp]=0;
                    }
                    else if(health[temp]>health[store.top()]){
                        health[store.top()]=0;
                        store.pop();
                        health[temp]--;
                    }
                    else{
                        health[store.top()]--;
                        health[temp]=0;
                    }
                }
            }
            else store.push(temp);
        }
        for(auto x: health){
            if(x!=0) ans.push_back(x);
        }
        return ans;
    }
};