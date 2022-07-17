/*

    Stack Data Structure
    ====================

    - Operations
        - Push O(1)
        - Pop O(1)
        - Top O(1)
        - isEmpty O(1)

*/

#include <iostream>

using namespace std;

class Stack
{

public:
    int top;
    int size;
    int *arr;

    Stack(int size){

        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int data){
        if( size - top > 1 ){

            top++;
            arr[top] = data;
        }else{

            cout<<"Stack Overflow"<<endl;
        }
    }

    void pop(){
        if( top>-1 ){
            top--;
        }else{
            cout<<"Stack Underflow"<<endl;
        }
    }

    int peek(){
        if( top>-1 ){
            return arr[top];
        }else{
            cout<<"Stack is empty"<<endl;
            return -1;
        }
    }

    bool isEmpty(){
        if( top == -1 ){
            return true;
        }else{
            return false;
        }
    }
};

int main()
{

    Stack st(5);

    st.push(11);
    st.push(22);
    st.push(33);
    st.push(44);
    st.push(55);
    st.push(66);
    
    cout<< st.peek() <<endl;

    return 0;
}