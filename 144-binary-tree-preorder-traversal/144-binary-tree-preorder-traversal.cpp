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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> vt;
        fun(root , vt);
        return vt;
    }
    void fun(TreeNode* root , vector<int>&vt){
        
        if(!root) return ;
        vt.push_back(root->val);
        fun(root->left , vt);
        fun(root->right , vt);
    }
};