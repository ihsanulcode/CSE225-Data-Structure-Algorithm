#include <iostream>
using namespace std;

int main()
{
    int ArraySize;
    cout << "Enter array size: ";
    cin  >> ArraySize;

    int* ptr = new int[ArraySize];

    for(int i=0;i<ArraySize;i++){
        cout << "Element " << i << ": ";
        cin  >> ptr[i];
    }

    for(int i=0;i<ArraySize;i++){
        cout << "\nIndex " << i << ": ";
        cout << "" << ptr[i] << endl;
    }

    delete [] ptr;
    ptr = NULL;

}


