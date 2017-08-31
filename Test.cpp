//pl.spoj.com/problems/AL_15_01/

#include <iostream>
#include <string>
#include <cstddef>
using namespace std;

int main()
{
    string D;
    string J,M;
    getline(cin,D);
    getline(cin,J);
    getline(cin,M);
    size_t max = min (D.size() ,min(J.size(), M.size())); // max dlugosc slowa to minimum z Darka i wybranego minimum z J i M
    size_t wynik = 0;
    for (size_t i=0; i < max; ++i)
    {
        if (D[i] != J[i])
            wynik++;
        if (D[i] != M[i] && M[i] == J[i])
            wynik++;
        if (J[i] == D[i] && M[i] != J[i])
            wynik++;
    }
    cout<<wynik;

    return 0;
}
