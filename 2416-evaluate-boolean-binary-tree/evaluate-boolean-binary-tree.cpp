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
    // int check(TreeNode* root){
    //     if(root->val==1 || root->val==0) return root->val;
    //     else if(root->val==2) return(check(root->left) || check(root->right));
    //     else return(check(root->left) && check(root->right));
    // }
    bool evaluateTree(TreeNode* root) {
        // return check(root);
        if(root->val==1 || root->val==0) return root->val;
        else if(root->val==2) return(evaluateTree(root->left) || evaluateTree(root->right));
        else return(evaluateTree(root->left) && evaluateTree(root->right));
    }
};