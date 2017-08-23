#include <iostream>

using namespace std;

int main()
{
    int liczba=0;
    int r=0;
    int licznik=0;
    while (cin>>liczba)
    {
        if(liczba == 42 && r==1)
            licznik++;

        if(liczba!=42)
        {
            r=1;
            cout<<liczba<<endl;
        }
        else
        {
            r=0;
            cout<<liczba<<endl;
        }
        if(licznik==3)
            break;

    }

return 0;
}


