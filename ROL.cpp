#include <iostream>

using namespace std;

int main()
{
    int testy;
    cin>>testy;
    int ile;
    while(testy--)
    {
        cin>>ile;
        int tab1[ile];
        for(int i=0; i<ile; i++)
            cin>>tab1[i];
        for (int i=1; i<ile; i++)
        {
            cout<<tab1[i]<<" ";
        }
       cout<<tab1[0]<<'\n';
    }
    return 0;
}
