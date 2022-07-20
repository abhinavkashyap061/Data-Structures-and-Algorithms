#include <iostream>

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

// input: 1 2 4 -1 -1 5 7 -1 -1 -1 3 -1 6 -1 -1
// this way of building a tree is known as preorder build of tree.
// in which we first build the root node, then left node and then right node.

Node * buildTree(){

    int temp;
    cin >> temp;

    if( temp==-1 ){
        return NULL;
    }

    Node * n = new Node(temp);

    n -> left = buildTree();
    n -> right = buildTree();

    return n;

}

int main(){

    return 0;
}