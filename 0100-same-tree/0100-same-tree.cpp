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
    bool isSimilar(TreeNode* p, TreeNode* q)
    {
        if((p==NULL && q!=NULL)||(p!=NULL && q==NULL))
            return false;
        if((p!=NULL && q!=NULL) &&(p->val!=q->val))
            return false;
        if(p==NULL&&q==NULL)
        {
            return true;
        }
        if((p->left==NULL&&q->left!=NULL)||(p->left!=NULL && q->left==NULL)||(p->right==NULL&&q->right!=NULL)||(p->right!=NULL && q->right==NULL))
        {
            return false;
        }
        if((p->left!=NULL&&q->left!=NULL)&&(p->left->val!=q->left->val))
        {
            return false;
        }
        if((p->right!=NULL&&q->right!=NULL)&&(p->right->val!=q->right->val))
        {
            return false;
        }
        return (isSimilar(p->left,q->left) && isSimilar(p->right,q->right));
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        return isSimilar(p,q);
    }
};