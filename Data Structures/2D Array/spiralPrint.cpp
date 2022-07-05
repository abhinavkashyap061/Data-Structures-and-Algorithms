
// Problem link: https://leetcode.com/problems/spiral-matrix/

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
        vector<int> res;
        
        // our array's rows and columns
        int rows = matrix.size();
        int cols = matrix[0].size();
        
        // initialising indexes
        int start_row = 0;
        int start_col = 0;
        int end_col = cols-1;
        int end_row = rows-1;
        
        // to check the loop, if all elements are printed 
        int count = 0;
        int total_elements = rows*cols;
        
        while( count<total_elements ){
            
            // print starting row
            for( int i = start_col; count<total_elements && i<=end_col ; i++ ){
                res.push_back(matrix[start_row][i]);
                count++;
            }
            start_row++;
            
            // print ending column
            for( int i=start_row; count<total_elements && i<=end_row; i++ ){
                res.push_back(matrix[i][end_col]);
                count++;
            }
            end_col--;
            
            // print ending row
            for( int i=end_col; count<total_elements && i>=start_col; i-- ){
                res.push_back(matrix[end_row][i]);
                count++;
            }
            end_row--;
            
            // print starting column
            for( int i=end_row; count<total_elements && i>=start_row; i-- ){
                res.push_back(matrix[i][start_col]);
                count++;
            }
            start_col++;
            
        }
        
        return res;
        
    }
};
