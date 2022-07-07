/*

Check whether product of elements are positive or negative
==========================================================

- Implement a function that takes a 2-D Array as argument and returns 1 if product of elements in 2-D Array is non negative otheerwise 0.

- 
Sample Input 1:
-1 1 1 -1
-2 1 1 1
1 1 1 3

Sample Output 1:
0

- 
Sample Input 2:
1 1 1
2 2 2

Sample Output 2:
1

*/

#include<bits/stdc++.h>
using namespace std;

int checkProductSign(vector<vector<int>> matrix) {
    
    int count=0;
    
    int rows = matrix.size();
    int cols = matrix[0].size();
    
    for( int i=0; i<rows; i++ ){
        
        for( int j=0; j<cols; j++ ){
            
            if( matrix[i][j]==0 ){

                return 1;

            }else if(matrix[i][j]<0){
                
                count++;

            }
        }
    }
    
    if( count%2==0 ){

        return 1;

    }else{

        return 0;
        
    }
    
   
}