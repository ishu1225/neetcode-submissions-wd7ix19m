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
    vector<vector<int>> ans;
    void order(TreeNode* root, int row){
        if(!root)return;
        if(ans.size() == row) {
            ans.push_back({});
        }
        ans[row].push_back(root->val);
        order(root->left,row+1);
        order(root->right,row+1);
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        order(root,0);
        return ans;
    }
};
