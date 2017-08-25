#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x, y;
    int r;
    cin>>x>>y>>r;
    int punkty;
    cin>>punkty;
    while(punkty--)
    {
        int a, b;
        cin>>a>>b;
        int p, q;
        p=x-a;
        q=y-b;

        if (p*p + q*q > r*r) //podniesione obustronnie do kwadratu
        {
            cout<<"O"<<"\n";
        }
        else if ( p*p + q*q < r*r)
        {
            cout<<"I"<<"\n";
        }
        else
        {
            cout<<"E"<<"\n";
        }
    }
    return 0;
}
