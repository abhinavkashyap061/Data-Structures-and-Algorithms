#include <iostream>

using namespace std;

void selectionSort( int arr[], int n){

    for( int i=0; i<n-1; i++){

        int current = arr[i];

        int min_position = i;

        
        for( int j=i+1; j<n; j++){

            if( arr[j]<current ){
                min_position = j;
            }
        }

        
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