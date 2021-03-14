#include<iostream>
#include"dynarr.h"
using namespace std;

int main(){

    //Task 3

    int input,R,C;
    dynarr object1(); //creating object with no argument constructor
    dynarr object2(5,5); //creating object with argument 5

    //getting row, col from user
    cout << "Enter row: ";
    cin >> R;
    cout << "Enter column: ";
    cin >> C;

    //allocate 2D array size using allocate() function
    object2.allocate(R,C);

    printf("Enter elements:\n");
    for(int row=0;row<R;row++){
        for(int col=0;col<C;col++){
            cin >> input; //getting array elements from user input
            object2.setValue(row,col,input); //setting elements using setValue() function
        }
    }

    printf("\nPrinting array:\n");
    for(int row=0;row<R;row++){
        for(int col=0;col<C;col++){
            //printing all elements stored in the array using getValue() function
            cout << object2.getValue(row,col) << " ";
        }printf("\n");
    }

    return 0;
}
