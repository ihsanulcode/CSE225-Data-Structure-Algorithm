#include<iostream>
#include"dynarr.h"
#include "dynarr.cpp"
using namespace std;

int main(){

    //Task 4
    float input;
    dynarr<float> object(5);

    //getting elements from user input
    printf("Enter 5 elements:\n");
    for(int i=0; i<5; i++){
        cin >> input; //getting array elements from user input
        object.setValue(i,input); //setting elements using setValue() function
    }


    printf("\nPrinting array:\n");
    for(int i=0; i<5; i++){
        //printing all elements stored in the array using getValue() function
        cout << object.getValue(i) << " ";
    }

    return 0;
}
