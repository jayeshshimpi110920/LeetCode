class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int n = matrix.size();
        int m = matrix[0].size();
        
		// if matrix have 0 rows or 0 colums
        if(n == 0 || m == 0) return false;
        
		// treating matrix as array just taking care of endices
		// [0..n*m]
        int start = 0, end = m*n - 1;
        
        while(start <= end)
        {
            int mid = start + (end - start) / 2;
            int ind = matrix[mid/m][mid%m];            //it will  / % do it internally mid/col mid%col
            
            if (target == ind) return true;
            else if(target < ind) end = mid - 1;
            else start = mid + 1;       
        }
        return false;
    }
};