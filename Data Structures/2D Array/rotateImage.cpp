/*

- Problem link: https://leetcode.com/problems/rotate-image/

- transpose image first, O(N^2)

- then, reverse each row, O(N^2)

- Time complexity: O(N^2) + O(N^2)

- Space Complexity: O(1), because we are rotating the image in place only. No extra matrix is used.

*/

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        
        // it is a NxN matrix so number of rows == number of columns
        int n = matrix.size();
        
        // first, transpose the image
        for(int i=0; i<n; i++ ){

            for( int j=0; j<i; j++ ){

                // swapping rows with colums
                swap(matrix[i][j], matrix[j][i]);

            }
        }
        
        // after transposing the image, reverse it
        for( int i=0; i<n; i++ ){

            // reverse each array/vector in each row
            reverse(matrix[i].begin(), matrix[i].end());
        }
        
    }
};