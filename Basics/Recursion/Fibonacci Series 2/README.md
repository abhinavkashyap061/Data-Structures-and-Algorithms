
## Fibonacci Series 2

<img src="https://github.com/abhinavkashyap061/Data-Structures-and-Algorithms/blob/main/Basics/Recursion/Fibonacci%20Series%202/FibonacciSeries2.png?raw=true" alt="Fibonacci Series 2 Question">

- Solution:
```cpp
#include<bits/stdc++.h>
using namespace std;

int fibonacciSeries(int n) {
    
    // base case
    if( n==0 || n==1 || n==2 ){
        
        return 1;
    }
    
    // recursive relation
    int a = fibonacciSeries(n-1);
    int b = fibonacciSeries(n-2);
    int c = fibonacciSeries(n-3);
    
    return a+b+c;
      
}
```