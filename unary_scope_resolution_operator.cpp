#include<iostream>
using namespace std;

int tuna =55;

int main ()
{
    int tuna=20;
    cout<<"This is the local variable: "<<tuna <<endl;
    cout<<"This is the global variable: "<<::tuna <<endl;
    return 0;
}