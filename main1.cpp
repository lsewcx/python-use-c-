#include <iostream>

using namespace std;

void getmain()
{
    cout << "21313";
}

extern "C" //必须有这个
{
    void get()
    {
        getmain();
    }
}
