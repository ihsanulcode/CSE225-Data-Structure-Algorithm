#include <iostream>
#include"dynarr.h"
using namespace std;

int main()
{

    //sub - task - 1
    //declaring two objects
    dynArr obj1();   //with no-args
    dynArr obj2(5);  //with 5


    //sub - task - 2
    int temp;  //temp variable for user input
    cout << "Enter elements for:" << endl;
    for(int i = 0;i<5; i++){
        cout << "Index " << i << ": ";
        cin  >> temp;

        //calling setValue and setting the elements
        obj2.setValue(i,temp);
    }

    //sub - task - 3
    cout << "\nPrinting:" << endl;
    for(int i=0; i<5; i++){
        cout << "" << obj2.getValue(i) << " ";
    }
    return 0;
}
