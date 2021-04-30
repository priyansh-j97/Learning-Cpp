#include<iostream>

using namespace std;

int main()
{
    //assignment operators
    int c=6,x1=55,x2=55;
    c *= 5;
    cout<<c<<endl<<"-----"<<endl;

    //increment operators: Pre-fix increment -> First increment, then assignment
    cout<<++x1<<endl;
    cout<<x1<<endl<<"-----"<<endl;

    //increment operators: Post-fix increment -> First assignment, then increment
    cout<<x2++<<endl;
    cout<<x2<<endl;

    return 0;
}
