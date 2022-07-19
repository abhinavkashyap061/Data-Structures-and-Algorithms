#include <iostream>

#include <vector>

using namespace std;

class Stack
{

public:
    vector<int> arr;

    void push(int data)
    {

        arr.push_back(data);
    }

    void pop()
    {

        arr.pop_back();
    }

    int size(){

        return arr.size();

    }

    int peek(){

        return arr.back();
    }
};

int main(){

    Stack st;

    st.push(11);
    st.push(22);
    st.push(33);
    st.push(44);
    st.push(55);

    st.pop();

    cout<< "stack size: " << st.size() << endl;

    cout<< "top element: " << st.peek() << endl;

    return 0;
}