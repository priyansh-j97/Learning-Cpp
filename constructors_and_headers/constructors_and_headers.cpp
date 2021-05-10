//Constructor code is to be written here in this code
//This is the cpp source file
#include "constructors_and_headers.h" // or it can also be written as: #include <constructors_and_headers.h>
#include<iostream>

using namespace std;

Datatypes::Datatypes() //Constructor definition
{
    cout<<"I am inevitable because I am a constructor!"<<endl;
}

void Datatypes::printNumber(int x) //Function definition
{
    cout<<"This is in a function: "<<x<<endl;
}