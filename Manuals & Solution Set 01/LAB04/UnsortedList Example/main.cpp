#include <iostream>
#include "unsortedtype.cpp"
using namespace std;

template <class T> //print()
void print(UnsortedType<T> u){

    int length = u.lengthIs();
    T value;
    for(int i=0; i<length; i++){
        u.getNextItem(value);
        cout << value << " ";
    }
    cout << endl;
}

template <class T>   //retrieve()
void retrieve(UnsortedType<T> u, T value){
    bool b;
    u.retrieveItem(value,b);
    if(b)
        cout << "Item is found" << endl;
    else
        cout << "Item is not found" << endl;

}

void checkFull(bool b){   //checkFull()
    if(b)
        cout << "List is full" << endl;
    else
        cout << "List is not full" << endl;
}

int main(){

    UnsortedType<int> o;   //creates a list of integers
    o.insertItem(5);      //insert four items: 5 > 7 > 6 > 9
    o.insertItem(7);
    o.insertItem(6);
    o.insertItem(9);

    //printing the list
    cout << "List: ";
    print(o);

    //printing the length of the list
    cout << "\nLength of the list: " << o.lengthIs() << endl;

    //Insert one item
    o.insertItem(1);

    //print the list
    cout << "List After inserting one item: ";
    print(o);

    //retrieve values using another function and passing the list and the value as perimeter
    retrieve(o,4);
    retrieve(o,5);
    retrieve(o,9);
    retrieve(o,10);

    //checking if the list full or not
    checkFull(o.isFull());
    //delete 5
    o.deleteItem(5);
    //checking if the list full or not
    checkFull(o.isFull());
    //delete 1
    o.deleteItem(1);
    //printing the list
    cout << "List After deleting 5 and 1: ";
    print(o);
    //delete 6
    o.deleteItem(6);
    //printing the list
    cout << "List After deleting 6: ";
    print(o);

    return 0;
}
