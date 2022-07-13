#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
    
    if( n==0 ){
        return 1;
    }
    
    return n*factorial(n-1);
}

int C(int n, int k) {
    
    // base case
    if( n==0 || k==0){
        return 1;
    }
   
   // recursive relation
   int a = factorial(n-1)/(factorial(k-1)*factorial(n-k));
   int b = factorial(n-1)/(factorial(k)*factorial(n-k-1));
   
   return a+b;
}