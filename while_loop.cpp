#include<iostream>

using namespace std;

int main()
{
    int n=1, number, sum=0;
    while(n<=5)
    {
        cout<<"Enter no. here: ";
        cin>>number;
        sum=number+sum;
        cout<<"This is the sum: "<<sum<<endl;
        n++;
    }
    return 0;
}