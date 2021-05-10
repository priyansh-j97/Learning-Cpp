#include<iostream>
#include "deconstructors.h"
using namespace std;

newClass::newClass()
{
    cout<<"I am in the constructor"<<endl;
}

newClass::~newClass()
{
    cout<<"I am in the deconstructor"<<endl;
}