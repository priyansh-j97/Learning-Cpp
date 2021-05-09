#include <iostream>
using namespace std;

int main ()
{
    int arr[9];
    cout<<"Index - Value"<<endl;
    for(int i=0;i<=8;i++)
    {
        arr[i]=99;
        cout<<"  "<<i<<"  ---  "<<arr[i]<<endl;
    }
    return 0;
}