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
    int Height(TreeNode* root) {
        if (root == nullptr) {
            return 0;
        } else {
            int lHeight = Height(root->left);
            int rHeight = Height(root->right);

            // Check if the left and right subtrees are balanced
            if (lHeight == -1 || rHeight == -1 || abs(lHeight - rHeight) > 1) {
                return -1; // Not balanced
            }

            return (Height(root->left),Height(root->right)
            
            );
        }
    }

public:
    bool isBalanced(TreeNode* root) {
        return Height(root) != -1;
    }
};
