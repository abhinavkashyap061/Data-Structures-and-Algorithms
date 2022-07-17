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

class Node{

    public:

        int data;
        Node * next;

        Node(int data){
            this -> data = data;
            this -> next = NULL;
        }

};

class Stack{

    Node * head;
    int size;

    public:
        
        Stack(){

            head = NULL;
            size = 0;
        }

        void push(int data){

            Node * newNode = new Node(data);

            if( head == NULL ){

                head = newNode;
                size ++;
                return;
            }else{

                newNode -> next = head;
                head = newNode;
                size ++;
                return;
            }

        }

        void pop(){

            if( head == NULL ){

                cout<<"Stack Underflow"<<endl;
                return;
            }else{

                head = head -> next;
                size --;
                return;
            }
        }

        bool isEmpty(){

            if( size == 0 ){
                return true;
            }else{
                return false;
            }
        }

        int peek(){

            return head -> data;
        }

        int getSize(){
            return size;
        }

};

int main(){

    Stack st;
    
    st.push(11);
    st.push(22);
    st.push(33);
    st.push(44);
    st.push(55);

    cout << st.peek() << endl;

    cout << "size: " << st.getSize() << endl;

    st.pop();

    cout << "size: " << st.getSize() << endl;

    return 0;
}