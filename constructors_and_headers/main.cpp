#include "constructors_and_headers.h"
#include "constructors_and_headers.cpp"
#include<iostream>

using namespace std;

int main()
{
    int a;
    cout<<"Enter number here: ";
    cin>>a;
    Datatypes da;
    cout<<"This is a variable: "<<da.var<<endl;
    da.printNumber(a);
    return 0;
}