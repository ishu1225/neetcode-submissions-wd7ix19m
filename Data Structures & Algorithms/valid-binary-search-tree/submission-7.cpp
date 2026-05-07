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
    bool validity(TreeNode* root, int min, int max){
        if(!root)return true;
        if(root->val>=max||root->val<=min)return false;
        return validity(root->left,min,root->val)&&validity(root->right,root->val,max);
    }
    bool isValidBST(TreeNode* root) {
        return validity(root,INT_MIN,INT_MAX);
    }
};
