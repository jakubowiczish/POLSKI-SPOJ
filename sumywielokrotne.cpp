#include <iostream>

using namespace std;

int main()
{
    long long liczba;
    long long suma=0;
    long long sumaw=0; //suma koncowa
    while(cin>>liczba)
    {
        if (liczba==0)
        {
            cout<<suma<<endl;
            sumaw+=suma;
            suma=0;
        }
        else
        {
            suma+=liczba;
        }
    }

    cout<<sumaw<<endl;
    return 0;
}
