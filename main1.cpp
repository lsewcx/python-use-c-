#include <iostream>

using namespace std;

void getmain()
{
    cout << "21313";
}

extern "C"
{
    void get()
    {
        getmain();
    }
}