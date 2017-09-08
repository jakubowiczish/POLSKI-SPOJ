#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    char znak;
    int iloscwystapien = 0;
    while((znak = cin.get()) != EOF)
    {
        if(znak == '\n')
        {
            iloscwystapien++;
        }
    }
    cout<< iloscwystapien + 1;
    return 0;
}
