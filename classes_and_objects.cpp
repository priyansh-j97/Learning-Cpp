#include<iostream>
#include<string>

using namespace std;

class Datatypes
{
    public:
        void setName(string x)
        {
            name=x;
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
    Datatypes da;
    da.setName("Hello World");
    cout << da.getName();
    return 0;
}