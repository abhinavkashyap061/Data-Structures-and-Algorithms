// in order traversal: left, root, right

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
    cin >> temp;

    if( temp==-1 ){

        return NULL;

    }

    Node * newNode = new Node(temp);

    newNode -> left = buildTree();

    newNode -> right = buildTree();

    return newNode;
}

void inOrderTraversal(Node * root){

    if( root==NULL ){

        return;

    }

    inOrderTraversal(root -> left);

    cout << root -> data << " ";

    inOrderTraversal(root -> right);
    
}

int main(){

    return 0;
}