#include <iostream>

using namespace std;

class Queue{

    int *arr;

    int rear;
    int front;

    int maxSize;
    int currentSize;

    public:

        Queue( int defaultSize = 5 ){

            maxSize = defaultSize;

            arr = new int[maxSize];

            currentSize = 0;

            front = 0;
            rear = maxSize - 1;
        }

        bool isFull(){

            return maxSize==currentSize;
        }

        bool isEmpty(){

            return currentSize==0;
        }

        void push( int data ){

            if( isFull() ){

                return;

            }else{

                // insertion will always happen at 'rear + 1'
                rear = ( rear + 1 )%maxSize;
                arr[rear] = data;
                currentSize++;

            }
        }

        void pop(){

            if( isEmpty() ){

                return;

            }else{

                front = ( front + 1 )%maxSize;
                currentSize--;

            }
        }

        int getFront(){

            return arr[front];

        }

    
};

int main(){

    Queue st(7);

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);
    st.push(7);

    st.push(8);

    st.pop();
    st.pop();

    st.push(9);

    while( !st.isEmpty() ){

        cout << st.getFront() << endl;
        st.pop();

    }

    return 0;
}