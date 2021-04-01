#include <iostream>
#include "quetype.h"
#include "quetype.cpp"
using namespace std;

template<class ItemType>
void print(QueType<ItemType> a){
    QueType<ItemType> tmp = a; // copy by value
    while(!tmp.IsEmpty()){
        int cur_front;
        tmp.Dequeue(cur_front);
        cout << cur_front << " ";
    }
    cout << endl;
}

template<class ItemType>
void enqueue(QueType<ItemType>& a, int value){
    try{
        a.Enqueue(value);
    }catch(FullQueue& f){
        cout << "Queue Overflow" << endl;
    }
}

template<class ItemType>
int dequeue(QueType<ItemType>& a){
    try{
        int front_now;
        a.Dequeue(front_now);
        return front_now;
    }catch(EmptyQueue& e){
        cout << "Queue Underflow" << endl;
    }
}

int main()
{
    // Create a queue of integers of size 5
    QueType<int> a(5);

    // Print if the queue is empty or not
    cout << ((a.IsEmpty())? "Queue is Empty" : "Queue is not Empty") << endl;

    // Enqueue four items
    enqueue(a,5);
    enqueue(a,7);
    enqueue(a,4);
    enqueue(a,2);

    // Print if the queue is empty or not
    cout << ((a.IsEmpty())? "Queue is Empty" : "Queue is not Empty") << endl;

    // Print if the queue is full or not
    cout << ((a.IsFull())? "Queue is Full" : "Queue is not Full") << endl;

    // Enqueue another item
    enqueue(a,6);

    // Print the values in the queue (in the order the values are given as (input)
    print(a);

    // Print if the queue is full or not
    cout << ((a.IsFull())? "Queue is Full" : "Queue is not Full") << endl;

    // Enqueue another item
    enqueue(a,8);

    // Dequeue two items
    dequeue(a);
    dequeue(a);

    // Print the values in the queue (in the order the values are given as (input)
    print(a);

    // Dequeue three items
    dequeue(a);
    dequeue(a);
    dequeue(a);

    // Print if the queue is empty or not
    cout << ((a.IsEmpty())? "Queue is Empty" : "Queue is not Empty") << endl;

    // Dequeue an items
    dequeue(a);
}
