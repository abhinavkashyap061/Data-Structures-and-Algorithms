/*

    Linked List
    ===========

    What is Linked List?
    - It is a linear data structure made using collection of nodes.
        - A node contains a data and the address of the next node.

    Why Linked List is needed?
    - We can't change the size of an array in runtime, after initialising it.
    - In vectors, which is a type of dynamic array in which after the vector gets full/reaches capacity after intialising it.
      It doubles its capacity and creates a new vector of double size and copies all the values in it, by allocating new storage
      which is not the optimal situation as we are creating new memory and copying the values which takes time.
    - So, to avoid these things we use Linked List.

    Advatages of Linked List:
    - Linked List is a dynamic data structure which can be shrinked or grown during the runtime only, hence no memory wastage. 
    - Insertion and Deletion in Linked List is easy in Linked List
        - No shifting is needed
            - In array, if we have to add an element we would have to shift all the next elements to maintain order.
      

*/

#include <iostream>

using namespace std;

// Node Structure
class Node{

    public:
        int data;
        Node *next;

        // constructor intialisation
        Node(int data){
            this -> data = data;
            this -> next = NULL;
        }

        // destructor
        ~Node(){

            int value = this -> data;

            // freeing the memory
            if( this->next!=NULL ){
                delete next;
                this -> next = NULL;
            }

            cout<<"memory is freed for node with data: "<<value<<endl;
        }
};

/*

    Singly Linked List Operations
    =============================

    - Insert node at Head
    - Insert node at tail
    - Insert node at any position
    - Delete node at any position
    - Print linked List

*/

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

    // deleting first/start node
    if( position==1 ){

        // storing the head
        Node * temp = head;

        // move head forward
        head = head -> next;

        temp -> next = NULL;

        // freeing the memory
        delete temp;
    }else{

        // deleting any middle node or last node
        Node * prev = NULL;
        Node * curr = head;

        int i=1;

        while( i<=position ){

            prev = curr;
            curr = curr -> next;
            i++;
        }

        prev -> next = curr -> next;

        curr -> next = NULL;

        delete curr;
    }

    // int i=1;

    // while( i<position-1 ){

    //     temp = temp -> next;
    //     i++;
    // }

    // temp -> next = (temp -> next) -> next;
}

void printLinkedList( Node * &head ){

    Node * temp = head;

    while( temp!=NULL ){

        if( temp -> next == NULL ){
            cout<< temp -> data;
            return;
        }

        cout<< temp -> data <<" -> ";
        temp = temp -> next;
    }
}

int main(){

    Node *newNode = new Node(10);

    Node *head = newNode;
    Node *tail = newNode;

    insertAtHead(head, 123);
    insertAtHead(head, 124);
    
    insertAtTail(tail, 999);
    insertAtTail(tail, 888);

    insertAtPosition(5, head, 6969);
    deleteNode(1, head);

    printLinkedList(head);
}
