/*

- Problem link: https://www.geeksforgeeks.org/print-matrix-in-wave-form/

- in even column, we go from top to bottom

- in odd column, we go from bottom to top

- Time Complexity: O(rows * columns)

*/

vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    //Write your code here
    
    // to store answer
    vector<int> res;
    
    for( int i=0; i<mCols; i++ ){
        
        // even column -> print downwards
        if( i%2==0 ){
            
            for( int j=0; j<nRows; j++ ){
                
                res.push_back(arr[j][i]);
            }
        }else{
            
            // odd column -> print upwards
            for( int j=nRows-1; j>=0; j-- ){
                
                res.push_back(arr[j][i]);
            }
        }
    }
    
    return res;
}