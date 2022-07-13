
## Factorial

<img src="https://github.com/abhinavkashyap061/Data-Structures-and-Algorithms/blob/main/Basics/Recursion/Factorial/Factorial.png?raw=true" alt="Factorial Question">

- Solution:
```cpp
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
```