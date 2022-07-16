#include <iostream>

// including the 'list' header file we created
#include "List.h"

using namespace std;

int main(){

    SinglyLinkedList l();
    l.insertAtHead(10);
    l.insertAtTail(20);
    l.printLinkedList();

    return 0;
}