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
    bool sameTree(TreeNode* root, TreeNode* sub){
        if(!root&&!sub)return true;
        if(!root||!sub)return false;
        
        return (root->val==sub->val)&&sameTree(root->left,sub->left)&&sameTree(root->right,sub->right);
    }
    bool isSubtree(TreeNode* root, TreeNode* sub) {
        if(!root) return false;
        if(sameTree(root,sub))return true;
        return isSubtree(root->left,sub)||isSubtree(root->right,sub);
        
    }
};