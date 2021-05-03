#include<iostream>

using namespace std;

int main()
{
    int age;
    cout<<"Enter your age here: ";
    cin>>age;
    switch(age)
    {
        case 16:
            cout<<"Sweet Sixteen";
            break;
        case 18:
            cout<<"Salty Eighteen";
            break;
        case 21:
            cout<<"Sour Twenty-one";
            break;
        default:
            cout<<"You Exist";
    }
    //return 0;
}