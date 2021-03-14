#include <iostream>
#include "unsortedtype.cpp"
#include "studentInfo.cpp"
using namespace std;

template <class T>
void Print(UnsortedType<T> u){

    int length = u.lengthIs();
    T value;
    for(int i=0; i<length; i++){
        u.getNextItem(value);
        cout << value;
    }
}
template <class T>
void Retrieve(UnsortedType<T> u, T value){
    bool b;
    u.retrieveItem(value,b);
    if(b){
        cout << "Item is found" << endl;
    }

    else
        cout << "Item is not found" << endl;

}
void checkFull(bool b){
    if(b)
        cout << "List is full" << endl;
    else
        cout << "List is not full" << endl;
}

int main(){

    //creating 5 objects of studentInfo
    studentInfo s1(15234,"Jon",2.6);
    studentInfo s2(13732,"Tyrion",3.9);
    studentInfo s3(13569,"Sandor",1.2);
    studentInfo s4(15467,"Ramsey2",3.1);
    studentInfo s5(16285,"Arya",3.1);

    //creating a list of objects of studentInfo class
    UnsortedType<studentInfo> S;
    S.insertItem(s1);
    S.insertItem(s2);
    S.insertItem(s3);
    S.insertItem(s4);
    S.insertItem(s5);

    studentInfo ID = 15467;
    S.deleteItem(ID); //deleting
    ID = 13569;
    Retrieve(S,ID);  //retrieve the id
    Print(S);       //printing

    return 0;
}
