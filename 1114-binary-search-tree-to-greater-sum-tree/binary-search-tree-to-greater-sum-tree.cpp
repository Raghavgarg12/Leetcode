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
int sum=0;
    void dfs(TreeNode* &root){
        if(root==NULL) return;
        dfs(root->right);
        root->val+=sum;
        sum=root->val;
        dfs(root->left);
        // nums.push_back(root->val);
        
    }
    // void assign(TreeNode* root, int a){
    //     if(root->NULL) return;
    //     dfs(root->left,a--)

    // }
    TreeNode* bstToGst(TreeNode* root) {
        dfs(root);
        // int temp=0;
        // for(int i=nums.size()-1;i>=0;i--) {
        //     temp+=nums[i];
        //     nums[i]=temp;
        //     cout<<temp<<endl;
        // }
        // assign(root,nums.size());
        return root;
    }
};