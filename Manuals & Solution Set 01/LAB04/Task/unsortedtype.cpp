#include "Unsortedtype.h"
#include <iostream>
using namespace std;

template <class T>  //UnsortedType()
UnsortedType<T>::UnsortedType() {
    length = 0;
    currentPos = -1;
}

template <class T> //isEmpty()
bool UnsortedType<T>::isEmpty() {
    return (length == 0);
}

template <class T>   //isFull()
bool UnsortedType<T>::isFull() {
    return (length == max_items);
}

template <class T>  //makeEmpty()
void UnsortedType<T>::makeEmpty() {
    length = 0;
}

template <class T>    //insertItem()
void UnsortedType<T>::insertItem(T n){
    info[length] = n;
    length++;
}

template <class T>   //deleteItem()
void UnsortedType<T>::deleteItem(T  n){
    int position = 0;
    while (n != info[position])
        position++;
    info[position] = info[length - 1];
    length--;
}

template <class T>    //retrieveItem()
void UnsortedType<T>::retrieveItem(T& n, bool &found) {

    found = false;
    for(int i=0;i<length;i++){
        if(info[i] == n){
            found = true;
            break;
        }
    }
}

template <class T>   //lengthIs()
int UnsortedType<T>::lengthIs() {
    return length;
}

template <class T>   //resetList()
void UnsortedType<T>::resetList(){
    currentPos = -1;
}

template <class T>    //getNextItem()
void UnsortedType<T>::getNextItem(T& n){
    currentPos++;
    n = info [currentPos] ;
}



