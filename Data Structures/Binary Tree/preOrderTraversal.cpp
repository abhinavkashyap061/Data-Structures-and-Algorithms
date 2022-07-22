// pre order traversal: root, left, right

// input: 1 2 4 -1 -1 5 7 -1 -1 -1 3 -1 6 -1 -1
// output: 1 2 4 5 7 3 6 

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

void preOrderTraversal(Node * root){

    if( root==NULL ){

        return;
    }

    cout<< root -> data << " ";

    preOrderTraversal( root -> left );
    preOrderTraversal( root -> right );

}

int main(){

    Node * root = buildTree();
    preOrderTraversal(root);

    return 0;
}