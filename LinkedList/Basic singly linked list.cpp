// basic implementation of singly linked list
// head -> 1 -> 2 -> 3 -> NULL

#include<iostream>

using namespace std;

class Node{
public:
    int key; // data field
    Node* next; // address field

    Node(int key){ // constructor
        this->key = key;
        this->next = NULL;
    }

    ~Node(){} // destructor
};

// head -> 1 -> 2 -> 3 -> NULL

void printNodes(Node* head){
    while(head != NULL){
        cout << head->key << " "; // 1  2
        head = head->next; // going/moving to the next node
    }
}


int main(){

    Node* head = NULL; // head points to the first node

    Node* firstNode = new Node(1);
    head = firstNode; // head -> 1 -> NULL

    Node* secondNode = new Node(2);
    firstNode->next = secondNode; // head -> 1 -> 2 -> NULL

    Node* thirdNode = new Node(3);
    secondNode -> next = thirdNode;

    printNodes(head);



}
