
## Largest Element

<img src="https://github.com/abhinavkashyap061/Data-Structures-and-Algorithms/blob/main/Data%20Structures/Array/Largest%20Element/LargestElement.png?raw=true" alt="Largest Element Question">

- Solution:
```cpp
#include<bits/stdc++.h>
using namespace std;

int largestElement(vector<int> arr) {
    
    int n = arr.size();
    
    int max = arr[0];
    
    for( int i = 0 ; i<n ; i++ ){
        
        if( arr[i]>max )
            max = arr[i];
    }
    
    return max;
     
}
```