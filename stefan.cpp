#include <iostream>

using namespace std;

int main( )
{
    int zysk, miasta;
    long long suma=0;
    long long makskasa=0;
    cin>>miasta;
    while (miasta--)
    {
        cin>>zysk;
        suma+=zysk;
        if (suma > makskasa)
        {
            makskasa=suma;
        }
        if (suma < 0)
        {
            suma=0;
        }
    }

cout<<makskasa<<endl;

return 0;
}

