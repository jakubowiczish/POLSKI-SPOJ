#include <iostream>
#include <string>
using namespace std;

int main()
{
    int testy;
    cin>>testy;
    while(testy--)
    {
        string napis;
        cin>>napis;
        int licznik=1;
        for (int i=1; i<=napis.length(); i++)
        {
            if(napis[i] != napis[i-1])
            {
                if(licznik > 2)
                    cout<< napis[i-1] << licznik;
                else if (licznik == 2)
                    cout<< napis[i-1] << napis[i-1];
                else
                    cout<<napis[i-1];
                licznik=1;
            }
            else
                licznik++;
        }
    cout<<"\n";
    }
    return 0;
}
