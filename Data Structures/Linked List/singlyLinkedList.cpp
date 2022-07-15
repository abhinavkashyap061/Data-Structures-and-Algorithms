#include <iostream>

using namespace std;

class Node{

    public:
        int data;
        Node *next;

        // Linked List initialization
        Node(int data){
            this -> data = data;
            this -> next = NULL;
        }
};

void printLinkedList( Node * &head ){

    Node * temp = head;

    while( temp!=NULL ){

        cout<< temp -> data <<" ";
        temp = temp -> next;
    }
}

void insertAtHead( Node * &head, int data ){

    Node * temp = new Node(data);

    temp -> next = head;

    head = temp;
}

void insertAtTail( Node * &tail, int data){

    Node *temp = new Node(data);

    tail -> next = temp;

    tail = temp;

}

void insertAtPosition( int n, Node * &head, int data ){

    if( n==1 ){

        insertAtHead(head, data);
        return;
    }

    int i=1;

    Node * temp = head;

    while( i<n-1 ){

        temp = temp -> next;
        i++;
    }

    Node * nodeToInsert = new Node(data);

    nodeToInsert -> next = temp -> next;
    temp -> next = nodeToInsert;


}

void deleteNode(int position, Node * &head){

    Node *temp = head;

    int i=1;

    while( i<position-1 ){

        temp = temp -> next;
        i++;
    }

    temp -> next = (temp -> next) -> next;
}

// class List{

//     Node *head;
//     Node *tail;

//     public:
//         List():head(NULL), tail(NULL){}

//         // Push Front Operation
//         void push_front(int data){

//             if( head==NULL ){

//                 Node *n = new Node(data);
//                 head = tail = n;
//             }else{

//                 Node *n = new Node(data);
//                 n -> next = head;
//                 head = n;
//             }
//         }
// };

int main(){

    Node *newNode = new Node(10);
    // cout<< newNode -> data << endl;
    // cout<< newNode -> next << endl;

    Node *head = newNode;
    Node *tail = newNode;

    insertAtHead(head, 123);
    insertAtHead(head, 124);
    
    insertAtTail(tail, 999);
    insertAtTail(tail, 888);

    insertAtPosition(5, head, 6969);

    printLinkedList(head);
}
