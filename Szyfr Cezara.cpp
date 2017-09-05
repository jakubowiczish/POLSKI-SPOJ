#include <iostream>

using namespace std;

int main()
{
    string napis;
    while(getline(cin,napis))
    {
        for(int i=0; i<napis.length(); i++)
        {
            if(napis[i] > 87) // kody ASCII, 87 to W, 88 to X, 89 - Y, 90 - Z
            {
                if(napis[i] == 'X')
                    napis[i] = 'A';
                if(napis[i] == 'Y')
                    napis[i] = 'B';
                if(napis[i] == 'Z')
                    napis[i] = 'C';
            }
            else if (napis[i] > 64) // od 65 zaczyna sie A
            {
                napis[i] = napis[i] + 3;
            }
        }
        for (int i=0; i<napis.length(); i++)
        {
            cout<<napis[i];
        }

        cout<<'\n';
    }
    return 0;
}
