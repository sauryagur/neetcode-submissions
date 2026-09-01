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
    int diameterOfBinaryTree(TreeNode* root) {
        int best = 0;
        drecurse(root, best);
        return best;
    }

    int drecurse(TreeNode* root, int &best) {
        if (root == nullptr) return 0;
        int left = drecurse(root->left, best);
        int right = drecurse(root->right, best);
        
        int dia = max(left, right) + 1;
        best = max(best, left + right);
        return dia;
    }
};
