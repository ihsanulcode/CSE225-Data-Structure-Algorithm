//dynamic memory allocation
#include <iostream>
using namespace std;

void print(int *ptr){
    cout << *ptr << endl;
}

int main()
{
    int* ptr = new int;
    *ptr = 45;

    print(ptr);
    delete ptr;

}


