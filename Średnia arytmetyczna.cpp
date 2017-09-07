#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int testy;
    cin>>testy;
    int ile;
    int liczby[100] = {0};
    double srednia = 0.0;
    double odl_min = 10000000.0;
    int suma, pozycja; // suma liczb i pozycja liczby ktora jest najblizej
    while(testy--)
    {
        suma = 0;
        srednia = 0.0;
        odl_min = 10000000.0;
        cin>>ile;
        for(int i=0; i<ile; i++)
        {
            cin>>liczby[i];
            suma += liczby[i];
        }
        srednia = static_cast<double>(suma) / static_cast<double>(ile); // static_cast - konwersja na typ double
        for(int i=0; i<ile; i++)
        {
            double odleglosc = abs(srednia - liczby[i]);
            if(odleglosc < odl_min)
                {
                    odl_min = odleglosc;
                    pozycja = i;
                }
        }
        cout<< liczby[pozycja] << '\n';
    }
    return 0;
}
