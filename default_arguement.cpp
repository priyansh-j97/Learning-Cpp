#include<iostream>

using namespace std;

int volume(int=1,int=1,int=1); // this is called a default arguement

int main()
{
    cout << volume(4,9);
    return 0;
}

int volume(int l, int b, int h)
{
    return l*b*h;
}