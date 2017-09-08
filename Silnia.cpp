#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    int testy;
    cin>>testy;
    while(testy--)
    {
        unsigned long long silnia = 1;
        int liczba;
        cin>>liczba;
        for(int i=1; i<=liczba; i++)
        {
            silnia *= i;
        }
        cout<<silnia<<'\n';

    }
    return 0;
}
