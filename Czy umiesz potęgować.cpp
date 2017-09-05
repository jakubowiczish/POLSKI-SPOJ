#include <iostream>

using namespace std;

int main()
{
    int ostatnia[10][4] =
    {
    {0,0,0,0},
    {1,1,1,1},
    {6,2,4,8},
    {1,3,9,7},
    {6,4,6,4},
    {5,5,5,5},
    {6,6,6,6},
    {1,7,9,3},
    {6,8,4,2},
    {1,9,1,9},
    };
    int testy;
    cin>>testy;
    unsigned long int podstawa,wykladnik;
    while(testy--)
    {
        cin>>podstawa>>wykladnik;
        cout<< ostatnia[podstawa % 10][wykladnik % 4] <<endl;
    }
    return 0;
}
