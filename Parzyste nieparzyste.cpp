#include <iostream>

using namespace std;

int main()
{
    int testy;
    cin>>testy;

    while(testy--)
    {
        int ile_liczb;
        cin>>ile_liczb;
        int liczby[ile_liczb];
        for(int i=0; i<ile_liczb; i++)
        {
            cin>>liczby[i];
        }
        for(int i=1; i<ile_liczb; i=i+2)
        {
            cout<<liczby[i]<<" ";
        }
        for(int j=0; j<ile_liczb; j=j+2)
        {
            cout<<liczby[j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
