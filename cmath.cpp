#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float a,p,r,t;
    cout<<"Type in Principle, Rate and Time (in years)"<<endl;
    cin>>p>>r>>t;
    for(int i=1;i<=t;i++)
    {
        a=p*pow(1+(r/100),i);
        cout<<"Amount after "<<i<<" year(s) is: "<<a<<endl;
    }
    return 0;
}