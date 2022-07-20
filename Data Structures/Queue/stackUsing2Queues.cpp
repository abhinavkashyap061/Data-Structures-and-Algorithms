#include <iostream>

#include <queue>

using namespace std;

class Stack{

    queue<int> q1;
    queue<int> q2;

    public:

        void push( int data ){

            // inserting in non empty queue
            if( !q1.empty() ){

                q1.push(data);

            }else{

                q2.push(data);

            }

        }

        void pop(){

            if( !q1.empty() ){

                while( !q1.empty() ){

                    int temp = q1.front();

                    q1.pop();

                    if( q1.empty() ){

                        break;

                    }

                    q2.push(temp);
                }

            }else{
                
                while( !q2.empty() ){

                    int temp = q2.front();

                    q2.pop();

                    if( q2.empty() ){

                        break;

                    }

                    q1.push(temp);
                }
                
                    
            }            
        }

        int top(){
            
            if( !q1.empty() ){

                while( !q1.empty() ){

                    int temp = q1.front();

                    q1.pop();

                    if( q1.empty() ){

                        q2.push(temp);
                        return temp;

                    }

                    q2.push(temp);
                }

            }else{
                
                while( !q2.empty() ){

                    int temp = q2.front();

                    q2.pop();

                    if( q2.empty() ){

                        q1.push(temp);
                        return temp;

                    }

                    q1.push(temp);
                }
                
                    
            }            
        }
};

int main(){

    Stack s;

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    s.pop();

    cout<< s.top() << endl;

    return 0;
}