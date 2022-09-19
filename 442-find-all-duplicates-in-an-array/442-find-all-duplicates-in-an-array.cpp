class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        
        vector<int> vt;
            
        for(int i=0;i<nums.size();i++){
            
            if(nums[abs(nums[i])-1]<0){
                vt.push_back(abs(nums[i]));
            }
            
            nums[abs(nums[i])-1]= -(nums[abs(nums[i])-1]);
            
        }
        
        
        return vt;
    }
};