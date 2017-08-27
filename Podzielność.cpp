#include <iostream>

using namespace std;

int main()
{
    int testy;
    cin>>testy;
    int najwieksza;
    int x,y; // podzielne przez x i niepodzielne przez y
    while(testy--)
    {
        cin>>najwieksza>>x>>y;
        for (int i=0; i<najwieksza; i++)
        {
            if(i%x == 0 && i%y != 0 )
            {
                cout<<i<<" ";
            }
        }
    cout<<"\n";
    }

    return 0;
}
