#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    double a,b,c;
    double delta;

    while(cin>>a>>b>>c)
    {
        delta = b*b - 4*a*c;
        if (delta < 0)
        {
            puts("0"); // cout + endl
        }
        else if (delta == 0)
        {
            puts("1");
        }
        else
            puts("2");
    }
    return 0;
}
