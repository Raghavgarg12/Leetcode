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
                        // cout<<1<<endl;
                        health[store.top()]=0;
                        store.pop();
                        health[temp]=0;
                    }
                    else if(health[temp]>health[store.top()]){
                        // cout<<2<<endl;
                        health[store.top()]=0;
                        store.pop();
                        health[temp]--;
                    }
                    else{
                        // cout<<3<<endl;
                        health[store.top()]--;
                        health[temp]=0;
                    }
                }
                // if(store.empty() && health[temp]!=0) ans.push_back(health[temp]);
            }
            else store.push(temp);
        }
        // while(!store.empty()){
        //     ans.push_back(health[store.top()]);
        //     store.pop();
        // }
        for(auto x: health){
            if(x!=0) ans.push_back(x);
        }
        return ans;
    }
};
// indices = [4,3,2,1,0]