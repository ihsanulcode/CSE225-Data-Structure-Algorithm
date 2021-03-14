#include "dynarr.h"
#include<iostream>
using namespace std;

dynarr::dynarr()
{
    data = NULL;
    R = 0;
    C = 0;
}

dynarr::dynarr(int R,int C)
{
    data = new int*[R];
    for (int i = 0; i < R; i++) {
        data[i] = new int[C];
    }
}

dynarr::~dynarr()
{
    delete [] data;
}

int dynarr::getValue(int R,int C)
{
    return data[R][C];
}

void dynarr::setValue(int R,int C,int value)
{
    data[R][C] = value;
}

void dynarr::allocate(int R,int C)
{
    data = new int*[R];
    for (int i = 0; i < R; i++) {
        data[i] = new int[C];
    }
}
