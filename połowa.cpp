#include <iostream>
#include <string>
using namespace std;

int main()
{
    int testy;
    string wyraz;
    cin>>testy;
    while (testy--)
    {
       cin>>wyraz;
       for (int i=0; i<(wyraz.size()/2); i++)
       {
           cout<<wyraz[i];
       }
       cout<<endl;
    }
    return 0;
}
