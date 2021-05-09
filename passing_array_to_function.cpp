#include <iostream>
using namespace std;

void printArray(int[],int); //Can also be written as void printArray(int arr[],int size)

int main()
{
    int arr[]={1,2,3,4,5,6};
    int size=sizeof(arr)/4; //Because size of an integer is 4byte
    printArray(arr,size);
    return 0;
}

void printArray(int arr[],int size)
{
    for(int i=0; i<size;i++)
    {
        cout<<arr[i]<<endl;
    }
}