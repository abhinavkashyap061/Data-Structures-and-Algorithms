#include <iostream>

#include <queue>

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

// we will be needing a data structure to store the children of each parent node i.e a queue
// using FIFO method
void levelOrderTraversal(Node * root){

    // creating a queue of 'Node *' so that we can access the root node's children too
    queue<Node *> q;

    q.push(root);
    q.push(NULL);

    while( !q.empty() ){

        Node * temp = q.front();

        if( temp==NULL ){

            cout << endl;

            q.pop();

            // inserting a new 'NULL' for the next level
            if( !q.empty() ){

                q.push(NULL);

            }
        }else{

            q.pop();

            cout << temp -> data << " ";

            if( temp -> left ){

                q.push(temp -> left);

            }

            if( temp -> right ){

                q.push(temp -> right);

            }
        }

        return;
        
    }



}

using namespace std;

int main(){

    return 0;
}