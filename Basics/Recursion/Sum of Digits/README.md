
## Sum of Digits

<img src="https://github.com/abhinavkashyap061/Data-Structures-and-Algorithms/blob/main/Basics/Recursion/Sum%20of%20Digits/SumOfDigits.png?raw=true" alt="Sum of Digits Question">

- Solution:
```cpp
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
```