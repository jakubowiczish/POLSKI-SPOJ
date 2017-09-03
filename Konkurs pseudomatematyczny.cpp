#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int testy;
    cin>>testy;
    while(testy--)
    {
        int punkty;
        cin>>punkty;
        vector <int> liczby;
        int liczba;
        int licznik = 0;
        int MAX = 0; // liczba najwieksza
        for (int i=0; i<punkty; i++)
        {
            cin>>liczba;
            liczby.push_back(liczba);
            if(liczba > MAX)
            {
                MAX = liczba;
            }
        }
        sort (liczby.begin(),liczby.end());
        for (int i=liczby.size()-1; i>=0; i--)
        {
            if(liczby[i] == MAX)
            {
                cout<<liczby[i]<<" ";
                licznik++; // liczba wystapien najwiekszej liczby
            }
            else break;
        }
        for (int i=0; i<liczby.size()-licznik; i++) // od wielkosci struktury odejmujemy liczbe wystapien najwiekszej liczby
        {
            cout<<liczby[i]<<" ";
        }
    cout<<'\n';
    }
    return 0;
}
