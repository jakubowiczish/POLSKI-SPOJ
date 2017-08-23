#include <iostream>

using namespace std;

int main()
{
    int sliczba;

    while(cin>>sliczba)
    {
        int ileliczb;
        cin>>ileliczb;
        int liczby[ileliczb];
        int wynik=0;
        for (int i=0; i<ileliczb; i++)
        {
            cin>>liczby[i];
            if (sliczba == liczby[i])
                wynik++;
        }
        cout<<wynik<<endl;
    }
    return 0;
}
