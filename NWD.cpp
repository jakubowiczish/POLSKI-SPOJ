#include <iostream>

using namespace std;

unsigned NWD(unsigned a, unsigned b)
{
    if(b == 0) return a;
    else       return NWD(b, a % b) ;
}

int main()
{
    int testy;
    cin>>testy;
    int a,b;

    while(testy--)
    {
        cin>>a>>b;
        cout<<NWD(a,b)<<endl;
    }
    return 0;
}
