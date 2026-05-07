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
int max=0;
int result=-1;
    void traversal(TreeNode* root, vector<int> &ans){
        if(!root||count>max) return ;
        
        traversal(root->left, ans);
        count++;
        if(count==max){
            result=root->val;
            return;
        }
        traversal(root->right,ans);
    }
    int kthSmallest(TreeNode* root, int k) {
        vector<int> ans;
        max=k;
        traversal(root,ans);
        return result;
    }
};
