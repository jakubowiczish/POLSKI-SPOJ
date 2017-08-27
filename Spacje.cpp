#include <iostream>
#include <cctype>
#include <string>

using namespace std;

int main()
{
    string napis;

    while(getline(cin,napis))
    {
       for (unsigned int i=0; i<napis.size(); i++)
       {
           if(isspace(napis[i]))
           {
               napis[i]=0;
               napis[i+1]=toupper(napis[i+1]);
           }
        }
        for(unsigned int i=0; i<napis.size(); i++)
        {
            if (napis[i] != 0)
            {
                cout<<napis[i];
            }
        }
        cout<<"\n";
    }

    return 0;
}
