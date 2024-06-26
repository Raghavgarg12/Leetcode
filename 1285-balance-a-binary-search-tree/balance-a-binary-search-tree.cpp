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
vector<int>nums;
    void dfs(TreeNode* root){
        if(root==NULL) return;
        dfs(root->left);
        nums.push_back(root->val);
        dfs(root->right);
    }
    TreeNode* create(int start, int end) {
        if (start > end) return NULL;
        int mid = start + (end - start) / 2;
        TreeNode* leftSubtree = create(start, mid - 1);
        TreeNode* rightSubtree = create(mid + 1, end);
        return new TreeNode(nums[mid], leftSubtree, rightSubtree);
    }
    TreeNode* balanceBST(TreeNode* root) {
        dfs(root);
        int n=nums.size();
        return create(0,n-1);
    }
};