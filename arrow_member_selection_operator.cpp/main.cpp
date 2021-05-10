#include<iostream>
#include "arrow_MSO.h"
#include "arrow_MSO.cpp"
using namespace std;

int main()
{
    test t;
    test *tPointer=&t;
    t.printing(); //Calling the function by using object
    tPointer->printing(); //Calling the function by using pointer
    return 0;
}