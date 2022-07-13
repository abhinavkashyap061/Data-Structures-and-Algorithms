
## Binomial Coefficient

<img src="https://github.com/abhinavkashyap061/Data-Structures-and-Algorithms/blob/main/Basics/Recursion/Binomial%20Coefficient/BinomialCoefficientQuestion.png?raw=true" alt="Binomial Coefficient Question">

- Solution:
```cpp
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
```