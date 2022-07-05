
// Problem link: https://www.codingninjas.com/codestudio/problems/print-like-a-wave_893268

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