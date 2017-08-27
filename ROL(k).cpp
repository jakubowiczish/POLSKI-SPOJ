#include <iostream>

using namespace std;

int main()
{
    int ile;
    int oile;
    cin>>ile>>oile;
    int tab[ile];

    for(int i=0; i<ile; i++)
    {
        cin>>tab[i];
    }
    for (int i=oile; i<ile; i++)
    {
        cout<<tab[i]<<" ";
    }
    for (int i=0; i<oile; i++)
    {
        cout<<tab[i]<<" ";
    }
    return 0;
}
