#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main ()
{
    srand(time(0)); // to seed time in seconds so as to get closely true random number
    // srand(215); //to seed a random number
    cout << rand() << endl; // gives out totally random numbers
    cout << 1+(rand()%6) << endl; // gives out random numbers between 1 and 6
    return 0;
}