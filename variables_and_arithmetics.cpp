#include<iostream>
using namespace std;

int main ()
{
    int a,b,sum,sub,mul,div,mod; //C++ follows BODMAS
    cout<<"Enter no. A here: ";
    cin>>a;
    cout<<"Enter no. B here: ";
    cin>>b;

    sum=a+b;
    sub=a-b;
    mul=a*b;
    div=a/b;
    mod=a%b;

    cout<<"The sum is: "<<sum<<endl;
    cout<<"The sub is: "<<sub<<endl;
    cout<<"The mul is: "<<mul<<endl;
    cout<<"The div is: "<<div<<endl;
    cout<<"The mod is: "<<mod<<endl;
    return 0;
}