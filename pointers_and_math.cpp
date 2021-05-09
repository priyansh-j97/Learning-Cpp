#include<iostream>
using namespace std;

int main ()
{
    int a[10];
    int*a1=&a[0];
    int*a2=&a[1];
    int*a3=&a[2];
    cout<<a1<<endl<<a2<<endl<<a3<<endl<<endl;
    a1++;
    cout<<a1<<endl<<a2<<endl<<a3<<endl;
    return 0;
}