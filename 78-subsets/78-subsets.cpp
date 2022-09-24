class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        
        vector<vector<int>> ans;
        vector<int> vt;
        helper(0 , nums , ans  , vt);
        return ans;
    }
    
    void helper(int ind , vector<int>& nums , vector<vector<int>>&ans , vector<int>vt){
        
        if(ind == nums.size()){
            ans.push_back(vt);
            return ;
        }
        
        vt.push_back(nums[ind]);
        helper(ind+1 , nums, ans , vt);
        vt.pop_back();
        helper(ind+1, nums , ans ,vt);
        
        
    }
};