
## Largest Element

<img src="" alt="Largest Element Question">

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