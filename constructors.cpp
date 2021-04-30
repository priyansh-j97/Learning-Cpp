#include<iostream>
#include<string>

using namespace std;

class Datatypes
{
    public:
        Datatypes(string a)
        {
            setName(a);
        }
        void setName(string s)
        {
            name=s;
        }
        string getName()
        {
            return name;
        } 
    private:
        string name;
};

int main()
{
    Datatypes da("Hello Dunia!");
    cout<<da.getName();
    return 0;
}