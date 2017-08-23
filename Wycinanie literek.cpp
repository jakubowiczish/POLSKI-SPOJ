#include <iostream>
#include <string>
using namespace std;

int main()
{
    string wyraz;
    char litera;

    while(cin>>litera)
    {
       cin>>wyraz;
       for (unsigned int i=0; i<wyraz.length(); i++)
       {
           if(wyraz[i]!=litera)
           {
                cout<<wyraz[i];
           }
       }
       cout<<endl;

    }
    return 0;
}
