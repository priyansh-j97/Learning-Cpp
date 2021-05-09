#include <iostream>
using namespace std;

//This is called function overloading
void printNumber(int x) //variable "a" goes here
{
    cout<<"This is an integer: "<<x<<endl;
}

void printNumber(float x) //variable "b" goes here
{
    cout<<"This is an integer: "<<x<<endl;
}

int main()
{
    int a=62;
    float b=50.78;
    printNumber(a);
    printNumber(b);
    return 0;
}
