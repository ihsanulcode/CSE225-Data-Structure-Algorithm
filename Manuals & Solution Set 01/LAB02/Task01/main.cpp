#include<iostream>
#include"dynarr.h"
using namespace std;

int main(){

    //sub task 1
    int input;
    dynarr object1(); //creating object with no argument constructor
    dynarr object2(5); //creating object with argument 5

    //sub task 2
    printf("Enter 5 elements:\n");
    for(int i=0; i<5; i++){
        cin >> input; //getting array elements from user input
        object2.setValue(i,input); //setting elements using setValue() function
    }

    //sub task 3
    printf("\nPrinting array:\n");
    for(int i=0; i<5; i++){
        //printing all elements stored in the array using getValue() function
        cout << object2.getValue(i) << " ";
    }

    return 0;
}
