
// Problem link: https://leetcode.com/problems/transpose-matrix/

class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        
        vector<vector<int>> res;
        
        int row = matrix.size();
        int col = matrix[0].size();
        
        for( int i=0; i<col; i++ ){
            
            vector<int> temp;
            
            for( int j=0; j<row; j++ ){
                
                
                temp.push_back(matrix[j][i]);
            }
            
            res.push_back(temp);
        }
        
        return res;
        
    }
};