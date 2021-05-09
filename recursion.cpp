#include <iostream>
using namespace std;

int factorial(int x)
{
    if(x==1)
    {
        return 1;
    }
    else
    {
        return x*factorial(x-1);
    }
}

int main()
{
    int a;
    cout<<"Enter input number here: ";
    cin>>a;
    cout<<factorial(a)<<endl;
    return 0;
}