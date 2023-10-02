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
    bool isUnivalTree(TreeNode* root) {
        if(root==NULL) return 1;
        if(root->left!=NULL && (root->val!=root->left->val) || root->right!=NULL && (root->val!=root->right->val))
            return 0;
        bool left=isUnivalTree(root->left);
        bool right=isUnivalTree(root->right);
        return left&&right;
    }
};