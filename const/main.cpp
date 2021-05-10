#include<iostream>
#include "const.h"
#include "const.cpp"
using namespace std;

int main()
{
    const int a=5; //this is a "const object"
    //a=10; // it will give error here as we have defined "a" as a "const variable"
    const constant c; //this is a "const object"
    c.fn(); 
    cout<<"This is a: "<<a<<endl;
    return 0;
}