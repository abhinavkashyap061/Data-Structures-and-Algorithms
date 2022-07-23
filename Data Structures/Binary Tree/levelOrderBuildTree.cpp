#include <iostream>

#include <queue>

using namespace std;

class Node{

    public:

        int data;
        Node * left;
        Node * right;

        Node(int x){

            data = x;
            left = NULL;
            right = NULL;

        }

};

Node * buildLevelOrderTree(){

    queue<Node *> q;

    int temp;
    cin >> temp;

    Node * rootNode = new Node(temp);

    q.push(rootNode);
    q.push(NULL);

    while( !q.empty() ){


    }
}

int main(){

    return 0;
}