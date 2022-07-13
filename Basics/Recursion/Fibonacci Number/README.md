
## Fibonacci Number

<img src="https://github.com/abhinavkashyap061/Data-Structures-and-Algorithms/blob/main/Basics/Recursion/Fibonacci%20Number/FibonacciNumber.png?raw=true" alt="Fibonacci Number Question">

- Solution:
```cpp
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
```