#include <iostream>

using namespace std;

int main()
{
    int ile;
    cin>>ile;
    long liczby[ile];
    for(int i=0; i<ile; i++)
    {
        cin>>liczby[i];
    }
    char znak;
    int zmienna;
    cin>> znak >> zmienna;
    for(int i=0; i<ile; i++)
    {
        if(znak == '>' && liczby[i] > zmienna)
        {
            cout<< liczby[i] <<'\n';
        }
        if(znak == '<' && liczby[i] < zmienna)
        {
            cout<< liczby[i] << '\n';
        }
    }
    return 0;
}
