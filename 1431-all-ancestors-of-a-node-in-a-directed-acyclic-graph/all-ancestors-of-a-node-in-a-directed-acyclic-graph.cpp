// class Solution {
// public:
//     vector<vector<int>> getAncestors(int n, vector<vector<int>>& edges) {
//         vector<vector<int>>nums(n);
//         vector<vector<int>>ans(n);
//         for(auto edge: edges){
//             nums[edge[1]].push_back(edge[0]);
//         }
//         for(int j=0;j<nums.size();j++){
//             vector<int>num=nums[j];
//             vector<int>arr;
//             if(nums.size()==0) ans.push_back(arr);
//             else{
//                 set<int>arr(n);
//             for(auto i: num){
//                 // set_union(num.begin(),num.end(),nums[i].begin(),nums[i].end(),arr.begin());
//                 arr.insert(i);
//                 arr.insert(nums[i]);
//             }
//             ans.push_back(arr);
//             }
//         }
//         return nums;
//     }
// };
class Solution {
public:
    vector<vector<int>> getAncestors(int n, vector<vector<int>>& edges) {
        // Create adjacency list
        vector<vector<int>> adjacencyList(n);
        for (int i = 0; i < n; i++) {
            adjacencyList[i] = {};
        }

        // Fill the adjacency list and indegree array based on the edges
        vector<int> indegree(n, 0);
        for (auto& edge : edges) {
            int from = edge[0];
            int to = edge[1];
            adjacencyList[from].push_back(to);
            indegree[to]++;
        }

        queue<int> nodesWithZeroIndegree;
        for (int i = 0; i < indegree.size(); i++) {
            if (indegree[i] == 0) {
                nodesWithZeroIndegree.push(i);
            }
        }

        // List to store the topological order of nodes
        vector<int> topologicalOrder;
        while (!nodesWithZeroIndegree.empty()) {
            int currentNode = nodesWithZeroIndegree.front();
            nodesWithZeroIndegree.pop();
            topologicalOrder.push_back(currentNode);

            // Reduce indegree of neighboring nodes and add them to the queue
            // if they have no more incoming edges
            for (int neighbor : adjacencyList[currentNode]) {
                indegree[neighbor]--;
                if (indegree[neighbor] == 0) {
                    nodesWithZeroIndegree.push(neighbor);
                }
            }
        }

        vector<vector<int>> ancestorsList(n);
        vector<set<int>> ancestorsSetList(n);
        for (int node : topologicalOrder) {
            for (int neighbor : adjacencyList[node]) {
                ancestorsSetList[neighbor].insert(node);
                ancestorsSetList[neighbor].insert(
                    ancestorsSetList[node].begin(),
                    ancestorsSetList[node].end());
            }
        }
        for (int i = 0; i < ancestorsList.size(); i++) {
            ancestorsList[i].assign(ancestorsSetList[i].begin(),
                                    ancestorsSetList[i].end());
            sort(ancestorsList[i].begin(), ancestorsList[i].end());
        }

        return ancestorsList;
    }
};