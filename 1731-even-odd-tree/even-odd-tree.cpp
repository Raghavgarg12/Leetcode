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
        // Create a queue for level-order traversal
        queue<TreeNode*> q;
        // Push the root node into the queue
        q.push(root);

        // Initialize variables for iteration and flag to alternate between even and odd levels
        int i;
        int flag = 0;

        // Continue the traversal until the queue is empty
        while (!q.empty()) {
            // Get the number of nodes at the current level
            int len = q.size();
            // Initialize prev with extreme values based on the flag
            int prev = flag ? INT_MAX : INT_MIN;

            // Iterate through nodes at the current level
            for (i = 0; i < len; i++) {
                // Dequeue a node
                TreeNode* node = q.front();
                q.pop();

                // Check conditions based on even or odd level
                if (flag) {
                    // For even level: value should be odd and strictly decreasing
                    if (node->val % 2 != 0 || node->val >= prev) return false;
                } else {
                    // For odd level: value should be even and strictly increasing
                    if (node->val % 2 == 0 || node->val <= prev) return false;
                }

                // Enqueue left and right children if present
                if (node->left) q.push(node->left);
                if (node->right) q.push(node->right);

                // Update prev with the current node's value
                prev = node->val;
            }

            // Toggle the flag for the next level
            flag = !flag;
        }

        // If the traversal completes without any issues, return true
        return true;
    }
};
