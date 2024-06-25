class Solution {
public:
int sum=0;
    void dfs(TreeNode* &root){
        if(root==NULL) return;
        dfs(root->right);
        root->val+=sum;
        sum=root->val;
        dfs(root->left);   
    }
    TreeNode* bstToGst(TreeNode* root) {
        dfs(root);
        return root;
    }
};