#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main()
{
    char cyfry[1000];
    int sumacyfr = 0; // podzielnosc przez 3
    while(1)
    {
        cin>>cyfry;
        if(cyfry[0] == '0')
            break;
        else
        {
            int dlugosc = strlen(cyfry);
            sumacyfr = 0;
            for(int i=0; i<dlugosc; i++)
            {
                sumacyfr += (cyfry[i] - 48); // kody ASCII
            }
            if((cyfry[dlugosc-1] == '0' || cyfry[dlugosc-1] == '5') && (sumacyfr%3 == 0))
                cout<<"TAK"<<'\n';
            else
                cout<<"NIE"<<'\n';
        }
    }
    return 0;
}
