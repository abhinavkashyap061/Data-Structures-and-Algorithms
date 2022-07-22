// post order traversal: left , right , root

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

Node * buildTree(){

    int temp;
    cin>> temp;

    if( temp==-1 ){

        return NULL;

    }

    Node * newNode = new Node(temp);

    newNode -> left = buildTree();

    newNode -> right = buildTree();

    return newNode;

}

void postOrderTraversal(Node * root){

    if( root==NULL ){

        return;

    }

    postOrderTraversal(root -> left);

    postOrderTraversal(root -> right);

    cout << root -> data << " ";

}

int main(){

    Node * root = buildTree();

    postOrderTraversal(root);

    return 0;
}