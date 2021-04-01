#include <iostream>
#include"quetype.cpp"
#include "quetype.h"
using namespace std;

void CheckEmpty(QueType<int> q)
{
    if(q.IsEmpty())
        cout << "Queue is Empty" <<endl;
    else
        cout << "Queue is not Empty" <<endl;
}

void CheckFull(QueType<int> q)
{
    if(q.IsFull())
        cout << "Queue is full" <<endl;
    else
        cout << "Queue is not full" <<endl;
}

void Print(QueType<int> q)
{
    QueType<int> temp = q;

    while(!temp.IsEmpty()){
        int x;
        temp.Dequeue(x);
        cout << x << " ";
    }cout << endl;
}

int main()
{
    //Creating a queue of integers of size 5
    QueType<int> q(5);

    //Printing if the queue is empty or not
    CheckEmpty(q);

    //Enqueue four items
    q.Enqueue(1);
    q.Enqueue(2);
    q.Enqueue(3);
    q.Enqueue(4);


    //Printing if the queue is empty or not
    CheckEmpty(q);

    //Printing if the queue is full or not
    CheckFull(q);

    //Enqueue another item
    q.Enqueue(5);

    //Printing the values in the queue
    Print(q);

    //Printing if the queue is full or not
    CheckFull(q);

    //Enqueue another item
    try{
        q.Enqueue(6);
    }catch(FullQueue& e){
         cout << "Queue Overflow" << endl;
    }

    //Dequeue two items
    int temp;
    q.Dequeue(temp);
    q.Dequeue(temp);

    //Printing the values in the queue
    Print(q);

    //Dequeue three items
    q.Dequeue(temp);
    q.Dequeue(temp);
    q.Dequeue(temp);

    //Printing if the queue is empty or not
    CheckEmpty(q);

    //Dequeue an item
    try{
        q.Dequeue(temp);
    }catch(EmptyQueue& e){
        cout << "Queue Underflow" << endl;
    }


    return 0;
}


