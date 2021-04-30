#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter no. A here: ";
    cin>>a;
    cout<<"Enter no. B here: ";
    cin>>b;
    if(a>b) 
    {
        cout<<"A>B"<<endl;
    }
    else if(a<b)
    {
        cout<<"B>A"<<endl;
    }
    else
    {
        cout<<"equal"<<endl;
    }
}