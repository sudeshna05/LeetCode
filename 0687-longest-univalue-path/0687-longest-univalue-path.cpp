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
    int path(TreeNode* root,int &maxi)
    {
        if(root==NULL) return 0;
        int left=0,right=0;
        int leftpath=path(root->left,maxi);
        int rightpath=path(root->right,maxi);
        if(root->left!=NULL && root->val == root->left->val)
            left=leftpath+1;
        if(root->right!=NULL && root->val == root->right->val)
            right=rightpath+1;
        maxi=max(maxi, left+right);
        return max(left,right);
    }
    int longestUnivaluePath(TreeNode* root) {
        int maxi=0;
        path(root,maxi);
        return maxi;
    }
};