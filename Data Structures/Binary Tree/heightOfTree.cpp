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

int heightOfTree(Node * root){

    if( root==NULL ){
        return 0;
    }

    int h1 = heightOfTree(root -> left);

    int h2 = heightOfTree(root -> right);

    return 1 + max(h1,h2);
    
}

int main(){

    return 0;
}