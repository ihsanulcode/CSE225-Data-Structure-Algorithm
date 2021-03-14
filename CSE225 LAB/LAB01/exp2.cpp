//accessing array elements using pointer
#include <iostream>
using namespace std;

int main()
{
    int arr[3] = {1,2,3};
    int* ptr = arr;

    for(int i=0;i<3;i++){
        cout << "index " << i << "   : " << *(ptr+i) << endl;
        cout << "Address " << i << " : " << (ptr+i) << endl;
        cout << endl;
    }
}


