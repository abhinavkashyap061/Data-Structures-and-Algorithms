
#include <iostream>

using namespace std;

void inc( int n ){
    
    // base case
    if( n==0 ){
        return;
    }
    
    // recursive relation
    inc(n-1);
    
    cout<<n<<" ";
}

void dec( int n ){
    
    // base case
    if( n==0 ){
        return;
    }
    
    cout<<n<<" ";
    
    // recursive relation
    dec(n-1);
    
}

int main()
{
    cout<<"enter any number to print in increasing and decreasing order"<<endl;
    int n;cin>>n;
    
    // in increasing order, we first write the recursive relation and then cout.
    inc(n);
    
    cout<<endl;
    
    // in decreasing order, we first write cout which prints the 'n' and then we write the recursive relation.
    dec(n);

    return 0;
}
