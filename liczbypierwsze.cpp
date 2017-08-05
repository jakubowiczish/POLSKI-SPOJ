#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n = 10000;
    bool liczby[n+1];
    for (int i=0; i<=n;i++)
    {
        liczby[i]=true;
    }
    liczby[1]=false;
    for (int i=2; i<=sqrt(n);i++)
    {
        if (liczby[i]==true)
        for (int j=i+i; j<=n; j=j+i)
        {
            liczby[j]=false;
        }
    }
    int ile_testow;
    cin>>ile_testow;
    for (int i=0; i<ile_testow;i++)
    {
        int liczba;
        cin>>liczba;
        if (liczby[liczba]==true)
            cout<< "TAK"<<endl;
        else cout<<" NIE" << endl;
    }
    return 0;
}
