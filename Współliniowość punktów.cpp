#include <iostream>

using namespace std;

int main()
{
    int testy;
    cin>>testy;

    while(testy--)
    {
        int xa, ya;
        int xb, yb;
        int xc, yc;
        cin>>xa>>ya>>xb>>yb>>xc>>yc;
        if((xa*yb+xb*yc+xc*ya-xc*yb-xb*ya-xa*yc)==0)
        {
            cout<<"TAK"<<endl;
        }
        else
        {
            cout<<"NIE"<<endl;
        }
    }
    return 0;
}
