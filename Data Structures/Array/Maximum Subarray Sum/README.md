
## Maximum Subarray Sum

<img src="https://github.com/abhinavkashyap061/Data-Structures-and-Algorithms/blob/main/Data%20Structures/Array/Maximum%20Subarray%20Sum/MaximumSubarraySum.png?raw=true" alt="Maximum Subarray Sum Question">

- Solution:
```cpp
#include<bits/stdc++.h>
using namespace std;

int maxSumSubarray(vector<int> A) {
    
    int n = A.size();
    
    int sum=INT_MIN;
    
    for( int i=0 ; i<n ; i++ ){
        
        int temp=0;
        
        for( int j=i ; j<n ; j++ ){
            
            temp+=A[j];
            
            if( temp>sum ){
            
                sum=temp;
            }
        }
    }
    
    return sum;
    
}
```