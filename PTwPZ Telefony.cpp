#include <iostream>

using namespace std;

int main()
{
    int testy;
    cin>>testy;
    string napis;
    while(testy--)
    {
        cin>>napis;
        for (int i=0; i<napis.length(); i++)
        {
            if (napis[i] >= 'A' && napis[i] <= 'C')
                cout<<"2";
            else if (napis[i] >= 'D' && napis[i] <= 'F')
                cout<<"3";
            else if (napis[i] >= 'G' && napis[i] <= 'I')
                cout<<"4";
            else if (napis[i] >= 'J' && napis[i] <= 'L')
                cout<<"5";
            else if (napis[i] >= 'M' && napis[i] <= 'O')
                cout<<"6";
            else if (napis[i] >= 'P' && napis[i] <= 'S')
                cout<<"7";
            else if (napis[i] >= 'T' && napis[i] <= 'V')
                cout<<"8";
            else if (napis[i] >= 'W' && napis[i] <= 'Z')
                cout<<"9";
        }
    cout<<endl;
    }
    return 0;
}
