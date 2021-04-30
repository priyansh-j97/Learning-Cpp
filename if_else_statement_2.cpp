#include<iostream>

using namespace std;

int main()
{
    int x;
    cout<<"Enter some no. here: ";
    cin>>x;
    if(x<=3)
    {
        cout<<"This is the first quater.";
    }
    else if(x>3 && x<=6)
    {
        cout<<"This is the second quater.";
    }
    else if(x>6 && x<=9)
    {
        cout<<"This is the third quater.";
    }
    else if(x>9 && x<=12)
    {
        cout<<"This is the fourth quater.";
    }
    else
    {
        cout<<"This is not a quater.";
    }
    return 0;
}