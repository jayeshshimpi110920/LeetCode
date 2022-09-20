class Solution {
public:
    int count = 0 ;
    int subarraysDivByK(vector<int>& nums, int k) {
        
        
        int count = 0, curr = 0;
        unordered_map<int, int> m = {{0, 1}};
        
        for (int i = 0; i < nums.size(); i++) {
            curr = (curr + nums[i] % k + k) % k;
            count += m[curr];
            m[curr]++;
        }
        
        return count;
    }
};