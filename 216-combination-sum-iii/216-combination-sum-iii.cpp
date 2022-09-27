class Solution {
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> nums={1,2,3,4,5,6,7,8,9};
        vector<vector<int>> ans;
        vector<int> vt;
        helper(0 , k , n , nums , vt , ans);
        return ans;
    }
    void helper(int ind , int k , int n , vector<int>&nums , vector<int> vt , vector<vector<int>>&ans){
        
        if(n==0 && vt.size()==k){
            ans.push_back(vt);
            return;
        }
        
        if(n<0 || ind>8) return;
        
        vt.push_back(nums[ind]);
        helper(ind+1 , k , n-nums[ind] , nums , vt , ans);
        vt.pop_back();
        helper(ind+1 , k , n ,nums , vt, ans);
        
        
    }
};