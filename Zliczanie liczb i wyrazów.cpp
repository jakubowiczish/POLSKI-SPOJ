#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    string wczyt;

    while(getline(cin,wczyt)) //wczytywanie wszystkich znakow (razem ze spacjami)
    {
        int slowa=0;
        int liczby=0;

        if (isalpha(wczyt[0])) slowa++; //isalpha - czy jest litera
        else liczby++;

        for (int i=1; i<wczyt.size()-1; i++)
        {
            if (isspace(wczyt[i])) // isspace - czy jest spacja
            {
                if (isdigit(wczyt[i+1])) liczby ++; // isdigit - czy jest
                else slowa++;
            }
        }
    cout<<liczby<<" "<<slowa<<"\n";
    }
    return 0;
}
