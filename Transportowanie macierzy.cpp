#include <iostream>

using namespace std;

int main()
{
    int wiersze,kolumny;
    cin>>wiersze>>kolumny;
    int macierz[wiersze][kolumny];
    for(int i=0; i<wiersze; i++)
    {
        for(int j=0; j<kolumny; j++)
        {
            cin>>macierz[i][j];
        }
    }
    for(int j=0; j<kolumny; j++)
    {
        for(int i=0; i<wiersze; i++)
        {
            cout<<macierz[i][j];
            cout<<" ";
        }
        cout<<endl;
    }

    return 0;
}
