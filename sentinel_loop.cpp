#include<iostream>

using namespace std;

int main ()
{
    int age=0, ageSum=0, counter=0;
    cout<<"Enter first person's age here, else enter -1 to quit."<<endl;
    cin>>age;
    while(age!=-1)
    {
        ageSum=ageSum+age;
        counter++;
        cout<<"Enter next person's age here, else enter -1 to quit."<<endl;
        cin>>age;
    }
    cout<<"Total no. of people: "<<counter<<endl;
    cout<<"Average age: "<<ageSum/counter<<endl;
    return 0;
}