#include<bits/stdc++.h>
using namespace std;

int factorial(int n) {
    
    // base case
    if( n==0 ){
        
        return 1;
    }
    
    // recursive relation
    int fact = n*factorial(n-1);
    
    return fact;
    
}