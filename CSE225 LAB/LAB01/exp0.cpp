#include <iostream>
using namespace std;

int main()
{
    int* ptr = new int;
    *ptr = 45;
    cout << *ptr;

    delete ptr;
    cout << *ptr;
}

