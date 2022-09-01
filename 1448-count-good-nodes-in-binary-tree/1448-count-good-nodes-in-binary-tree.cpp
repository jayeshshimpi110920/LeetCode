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
    int goodNodes(TreeNode* root ) {
        int ans =0 ;
        int track = INT_MIN;
        fun(root , track , ans);
        
        return ans;
        
    }
    
    void fun(TreeNode * root , int track , int &ans){
        if(!root) return;
        int k = root->val;
        if(track <= k){
            ans++;
            track = k;
        }

        
        fun(root->left , track ,ans);
        fun(root->right, track , ans);
        
        
        return ;
    }
    /*
    int ans=0;
    void pre(TreeNode* root,int maxi){
        if(!root) return;
        if(root->val>=maxi){
            ans++;
            maxi = root->val;
        }
        pre(root->left,maxi);
        pre(root->right,maxi);
    }
    int goodNodes(TreeNode* root) {
        pre(root,INT_MIN);
        return ans;
    }
    */
};