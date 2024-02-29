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
    bool isEvenOddTree(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        int i;
        int flag=0;
        while(!q.empty()){
            int len=q.size();
            int prev = flag ? INT_MAX : INT_MIN;
            cout<<"flag "<<flag<<endl;
            for(i=0;i<len;i++){
                TreeNode* node=q.front();
                q.pop();
                cout<<"prev "<<prev<<endl;
                cout<<node->val<<endl;
                if(flag){
                    if(node->val%2 !=0 || node->val>=prev) return false;
                }
                else if(node->val%2 == 0 || node->val<=prev) return false;
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
                prev=node->val;
            }
            flag=!flag;
        }
        return true;
    }
};