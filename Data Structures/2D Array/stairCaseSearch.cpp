/*

Staircase Search
================

- It is a Binary Search algorithm on a row and column wise sorted 2-D Array, to find the key.

- We traverse from the upper right element and go left if element>key or go downwards if element<key.

- the path of traversal resembles a staircase, hence the name of algo.

- It is an optimized approach to find an element with a linear time complexity of O(rows + cols), while that of linear search is O(rows*cols).

*/

#include <iostream>

using namespace std;

// we use a pair to store the co-ordinates of key
pair<int, int> stairCaseSearch(int arr[][4], int rows, int cols, int key){

    // if element is not present -> return {-1, -1}
    if( arr[0][0]>key || arr[rows-1][cols-1]<key){

        return {-1, -1};
    }

    // implementing staircase search
    int i=0;
    int j=cols-1;

    while( i<rows && j>=0 ){

        if( arr[i][j]==key){

            return {i,j};

        }else if( arr[i][j]>key ){

            // if element is greater, move to left/same row backwards
            j--;

        }else{

            // if element is smaller, move downwards/same column downwards
            i++;
        }
    }
    
    // element not found
    return {-1,-1};
}

int main(){

    int arr[][4] = {
        {10, 20, 30, 40},
        {15, 25, 35, 45},
        {27, 29, 37, 48},
        {32, 32, 39, 50}
    };

    // storing the result in a pair of int
    pair<int,int> coords = stairCaseSearch(arr,4,4,29);

    // special method to output pair 
    cout<<coords.first<<","<<coords.second<<endl;

    return 0;
}