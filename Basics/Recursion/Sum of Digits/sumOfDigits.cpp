#include<bits/stdc++.h>
using namespace std;

int sumOfDigit(int n) {
    //implement your code here
    
    // base case
    if( n<10 ){
        return n;
    }
    
    // recursive relation
    int ans = n%10 + sumOfDigit(n/10);
    
    return ans;
}