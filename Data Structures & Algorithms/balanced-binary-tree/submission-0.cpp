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
    bool isBalanced(TreeNode* root) {
        bool bal = true;
        balanced(root, bal);
        return bal;
    }
    int balanced(TreeNode* root,bool &bal) {
        if (root == nullptr) return 0;

        int left = balanced(root->left, bal);
        int right = balanced(root->right, bal);

        int diff = left - right;
        if (diff < -1 || diff > 1) {
            bal = false;
        }

        return max(left, right) + 1;
    }
};
