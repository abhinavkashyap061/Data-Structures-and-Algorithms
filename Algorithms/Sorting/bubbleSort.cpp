/*

Bubble Sort

- take larger element to the end by repeatedly swapping the adjacent elements.
- we use two nested loops so Time Complexity = O(N**2)

*/

#include <iostream>

using namespace std;

void bubbleSort( int arr[], int n){

    for( int i=0; i<n-1; i++ ){

        // repeated swapping
        for( int j=0; j<n-1-i; j++){

            // if greater -> push to the end
            if( arr[j]>arr[j+1] ){

                swap(arr[j], arr[j+1]);

            }

        }

    }
}

int main(){

    int n;cin>>n;

    int a[n]; for( int i=0; i<n; i++ ) cin>>a[i];

    bubbleSort(a,n);

    for( auto i: a) cout<<i<<" ";

    return 0;
}