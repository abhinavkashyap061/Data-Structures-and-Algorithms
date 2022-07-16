
// - Object Oriented approach to implement singly linked list
// - we will implement a 'list' header file that we can use in another c++ file.

// forward declaration
class SinglyLinkedList;

class Node{

    public:
        
        int data;
        Node * next;

        Node(int d):data(d), next(NULL){}

        friend class SinglyLinkedList;

};

class SinglyLinkedList{

    public:

        Node * head;
        Node * tail;

        SinglyLinkedList():head(NULL), tail(NULL){}

        void insertAtHead(int data){

            if( head==NULL ){
                Node * temp = new Node(data);
                head = temp;
                tail = temp;
            }else{
                Node * temp = new Node(data);
                temp -> next = head;
                head = temp;
            }
        }

        void insertAtTail(int data){

            if( head==NULL ){
                Node * temp = new Node(data);
                head = temp;
                tail = temp;
            }else{
                Node * temp = new Node(data);
                tail -> next = temp;
                tail = temp;
            }
        }

         void printLinkedList(Node * &head){

            Node * temp = head;

            while( temp!=NULL ){

                cout<< temp -> data <<" ";
                temp = temp -> next;
            }
         }
};