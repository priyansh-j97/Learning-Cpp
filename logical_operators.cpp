#include<iostream>

using namespace std;

int main ()
{
    int age, money;
    cout<<"Enter your age and money here: "<<endl;
    cin>>age>>money;
    if((age==21 && age==18) || (money>=500)) //"and" logical operator -> "&&" , "or" logical operator -> "||"
    {
        cout<<"You are allowed in!";
    }
    else
    {
        cout<<"You are not allowed in!";
    }

    return 0;
}