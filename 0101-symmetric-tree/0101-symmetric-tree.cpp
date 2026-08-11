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
    bool recurSymmetry(TreeNode* rootL,TreeNode* rootR)
    {
        if(rootL==NULL && rootR==NULL)
            return true;
        if(rootL==NULL || rootR==NULL)
            return false;
        if(rootL->val != rootR->val)
            return false;
        return (recurSymmetry(rootL->left,rootR->right)&&recurSymmetry(rootL->right,rootR->left));
    }
    bool isSymmetric(TreeNode* root) {
        if(root==NULL)
            return true;
        if(root->left==NULL && root->right==NULL)
            return true;
        if(root->left==NULL||root->right==NULL)
            return false;
        return recurSymmetry(root->left,root->right);
    }
};