#include <iostream>
using namespace std;

void val(int);
void ref(int*);

int main()
{
    int a=1,b=2;
    val(a);
    ref(&b);
    cout<<"This is a: "<<a<<endl<<"This is b: "<<b<<endl;
    return 0;
}

void val(int x)
{
    x=55;
    cout<<"This is x: "<<x<<endl;
}

void ref(int*x)
{
    *x=66;
    cout<<"This is x: "<<*x<<endl;
}