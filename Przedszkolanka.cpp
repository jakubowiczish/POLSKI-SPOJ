#include <iostream>

using namespace std;
unsigned NWD(unsigned a, unsigned b); //prototyp

int main()
{
    int testy;
    cin>>testy;
    int p1,p2;
    while(testy--)
    {
        cin>>p1>>p2;
        cout<<(p1*p2)/NWD(p1,p2)<<'\n';
    }
    return 0;
}

unsigned NWD(unsigned a, unsigned b)
{
    if(b == 0) return a;
    else       return NWD(b, a % b) ;
}
