/*

Selection Sort

- Repeatedly find the minimum element from unsorted array and put it in the beginning.
- Time Complexity = O(N**2)

*/

#include <iostream>

using namespace std;

void selectionSort( int arr[], int n){

    for( int i=0; i<n-1; i++){

        int current = arr[i];

        int min_position = i;

        // find out minimum element
        for( int j=i+1; j<n; j++){

            if( arr[j]<current ){
                min_position = j;
            }
        }

        // swap outside the loop
        swap(arr[i], arr[min_position]);
    }
    
}

int main(){

    int n;cin>>n;

    int a[n]; for( int i=0; i<n; i++ ) cin>>a[i];

    selectionSort(a,n);

    for( auto i: a) cout<<i<<" ";

    return 0;
}