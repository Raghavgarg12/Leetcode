/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int diameter(TreeNode* curr,int currD, int& depth, int& val){
        if(curr==NULL) return 0;
        if(currD>depth){
            depth=currD;
            val=curr->val;
        }
        int left=diameter(curr->left,currD+1, depth, val);
        int right=diameter(curr->right,currD+1, depth, val);
        return val;
    }
    int findBottomLeftValue(TreeNode* root) {
        int depth=0,val=0;
        diameter(root,1, depth, val);
        return val;
    }
};
// class Solution {
// public:
//     int findBottomLeftValue(TreeNode* root) {
//         queue<TreeNode*> q;
//         q.push(root);
//         int leftmost_value;

//         while (!q.empty()) {
//             TreeNode* node = q.front();
//             q.pop();

//             leftmost_value = node->val;

//             if (node->right) {
//                 q.push(node->right);
//             }
//             if (node->left) {
//                 q.push(node->left);
//             }
//         }

//         return leftmost_value;
//     }
// };