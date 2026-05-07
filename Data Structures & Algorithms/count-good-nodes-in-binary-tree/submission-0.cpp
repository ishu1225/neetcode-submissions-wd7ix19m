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
    
    int count(TreeNode* root, int val){
        if(!root)return 0;

        if(val>root->val) return count(root->left,val)+count(root->right,val);
        else{
            val=root->val;
            return 1+count(root->left,val)+count(root->right,val);

        }
    }
    int goodNodes(TreeNode* root) {
        if(!root)return 0;
        int maxi=root->val;
        return count(root,maxi);
    }
};
