#include <iostream>

using namespace std;

void bubbleSort( int arr[], int n){

    for( int i=0; i<n-1; i++ ){

        bool swapped = false;

        
        for( int j=0; j<n-1-i; j++){

            
            if( arr[j]>arr[j+1] ){

                swap(arr[j], arr[j+1]);
                swapped = true;

            }

        }

        if( !swapped ){
            break;
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