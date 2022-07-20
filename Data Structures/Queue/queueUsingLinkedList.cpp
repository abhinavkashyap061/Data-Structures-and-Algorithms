/*

    Queue Data Structure
    ====================

    - It follows FIFO ( First In First Out ) method.

    - Operations
        - Push O(1)
        - Pop O(1)
          - element gets popped out from the front, not from the rear.
        - Front O(1)

*/

#include <iostream>

using namespace std;

class Node{

    public:
        int data;
        Node * next;

        Node(int x){

            this -> data = x;
            this -> next = NULL;
        }
};

class Queue{

    public:

        Node * head;
        Node * tail;
        int data;
        int size;

        Queue(){

            head = NULL;
            tail = NULL;
            size = 0;

        }

        void push(int x){

            Node * newNode = new Node(x);

            if( head==NULL ){

                head = newNode;
                tail = newNode;
                size++;
                return;
        
            }else{


                tail -> next = newNode;

                tail = newNode;

                size++;

                return;

            }
        }

        void pop(){

            if( size==0 ){

                cout<<" not sufficient elements" <<endl;
                return;

            }else{

                head = head -> next;
                size--;
                return;

            }
        }

        int getSize(){
            
            return size;

        }

        int front(){

            int temp = head -> data;

            return temp;

        }

};

int main(){

    Queue st;

    st.push(11);
    st.push(22);
    st.push(33);

    cout << "size of queue: " << st.getSize() << endl;
    cout << "front of queue: " << st.front() << endl;

    return 0;
}