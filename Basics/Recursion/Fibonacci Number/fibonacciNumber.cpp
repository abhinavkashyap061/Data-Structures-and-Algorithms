#include<bits/stdc++.h>
using namespace std;

int fibonacci(int n) {
    //implement your code here
    
    // base case
    if( n==1 || n==0 ){
        
        return n;
    }
    
    // recursive relation
    int a = fibonacci(n-1);
    int b = fibonacci(n-2);
    
    return a+b;
}