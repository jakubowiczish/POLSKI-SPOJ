#include <iostream>

using namespace std;

int main()
{
    int ile_testow;
    cin>>ile_testow;
    int dozsumowania;
    int wynik;
    int liczba;
    for (int i=0; i<ile_testow; i++)
       {
           cin>>dozsumowania;
           wynik=0;
           for(int j=0; j<dozsumowania; j++)
            {
                cin>>liczba;
                wynik=wynik + liczba;
            }
    cout<<wynik<<endl;
       }

    return 0;
}
