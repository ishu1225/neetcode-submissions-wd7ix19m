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
int count=0;
int target=0;
int result=-1;
    void traversal(TreeNode* root){
        if(!root||count>target) return ;
        
        traversal(root->left);
        count++;
        if(count==target){
            result=root->val;
            return;
        }
        traversal(root->right);
    }
    int kthSmallest(TreeNode* root, int k) {
        target=k;
        traversal(root);
        return result;
    }
};
