#include<iostream>
#include"dynarr.h"
using namespace std;

int main(){

    //modifying

    int input,arrSize;
    dynarr object1(); //creating object with no argument constructor
    dynarr object2(5); //creating object with argument 5

    //getting size
    cout << "Enter array size: ";
    cin >> arrSize;
    //allocate array size using allocate() function
    object2.allocate(arrSize);

    printf("Enter elements:\n");
    for(int i=0; i<arrSize; i++){
        cin >> input; //getting array elements from user input
        object2.setValue(i,input); //setting elements using setValue() function
    }


    printf("\nPrinting array:\n");
    for(int i=0; i<arrSize; i++){
        //printing all elements stored in the array using getValue() function
        cout << object2.getValue(i) << " ";
    }

    return 0;
}
