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
        for(int i=ile_liczb-1; i>=0; i--)
        {
            cout<<liczby[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
