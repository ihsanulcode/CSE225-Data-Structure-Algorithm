//Assignment - 1
//Ihsanul Haque Asif 2013664642
//section 15

#include<iostream>
using namespace std;

int main(){

    //getting array size from user
    int ArraySize;
    cout << "Enter array size: ";
    cin  >> ArraySize;

    //Dynamic memory allocation for an integer array
    int* ArrayPointer = new int[ArraySize];

    //Getting array elements from user input
    //Using for loop
    cout << "\nEnter element for:" << endl;
    for(int i=0;i<ArraySize;i++){
        cout << "index " << i << ": ";
        cin  >> ArrayPointer[i];
    }

    //printing that array
    cout << "\nArray:" << endl;
    for(int i=0;i<ArraySize;i++){
        cout << ArrayPointer[i] << " ";
    }


    //De-allocate the array using the delete operator
    //using this operator to free up space in computer
    delete [] ArrayPointer;
}
