#include <iostream>
#include <string>

using namespace std;

int main()
{
    string napis;
    while(getline(cin,napis))
    {
        for (int i=0; i<napis.length(); i++)
        {
            if (napis[i] == '<')
            {
                while(napis[i] != '>')
                {
                    i++;
                    napis[i] = toupper(napis[i]);
                }
            }
        }
    cout<<napis<<"\n";
    }

    return 0;
}
