#include<iostream>
using namespace std;

void print_fn(int); // this is called Function Prototyping
int calculate(int,int);

int main()
{
    int a,b;
    cout<<"Enter no. A here: ";
    cin>>a;
    cout<<"Enter no. B here: ";
    cin>>b;
    print_fn(calculate(a,b));
}

void print_fn(int a)
{
    cout<<"The sum is: "<<a;
}

int calculate(int a,int b)
{
    return a+b;
}
