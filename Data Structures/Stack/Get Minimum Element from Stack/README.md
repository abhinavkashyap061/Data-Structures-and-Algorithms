## Get minimum element from stack

- Problem link: https://practice.geeksforgeeks.org/problems/get-minimum-element-from-stack/1

- ```cpp
class Solution{
    int minEle;
    stack<int> s;
    public:
    
       /*returns min element from stack*/
       int getMin(){
           
           //Write your code here
           
           if( s.empty() ){
               
               return -1;
               
           }else{
               
               return minEle;
               
           }
       }
       
       /*returns poped element from stack*/
       int pop(){
           
           //Write your code here
           
           if( s.empty() ){
               
               return -1;
               
            }else{
                
               if( s.top()>minEle ){
                   
                   int temp = s.top();
                   
                   s.pop();
                   
                   return temp;
                   
               }else{
                   
                   int temp = minEle;
                   
                   // update minimum variable
                   // as latest minimum is getting popped
                   minEle = 2*minEle - s.top();
                   
                   s.pop();
                   
                   return temp;
                   
               }
               
           }
           
       }
       
       /*push element x into the stack*/
       void push(int x){
           
           //Write your code here
           
           if( s.empty() ){
               
               s.push(x);
               minEle = x;
               
           }else{
               
               
               if( x<minEle ){
                   
                   int temp = (2*x) - minEle;
                   
                   s.push(temp);
                   
                   minEle = x;
                   
               }else{
                   
                   s.push(x);
                   
               }
               
           }
       }
};
```