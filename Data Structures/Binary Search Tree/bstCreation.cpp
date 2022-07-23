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

Node * insert(Node * root, int key){

    // base case
    if( root==NULL ){

        return  new Node(key);
    }

    // recursive case
    if( key < root -> data ){

        root -> left = insert(root -> left,key);

    }else{

        root -> right = insert(root -> right,key);

    }

    return root;

}

void printInOrder(Node * root){

    if( root==NULL ){

        return;

    }

    printInOrder(root -> left);

    cout << root -> data << " ";

    printInOrder(root -> right);

}

// traverse from root to leaf
// time complexity: O(Height of BST)
bool searchBst(Node * root, int key){

    if( root==NULL ){

        return false;

    }

    if( root -> data == key ){

        return true;

    }

    if( key < root -> data ){

        return searchBst(root -> left,key);

    }else{

        return searchBst(root -> right,key);
    }

}

int main(){

    Node * root = NULL;

    int arr[] = {8,3,10,1,6,14,4,7,13};

    for( auto i: arr){

        root = insert(root,i);

    } 

    printInOrder(root);

    cout << endl;

    cout << searchBst(root,10) << endl;

    return 0;
}