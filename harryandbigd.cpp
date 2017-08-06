#include <iostream>

using namespace std;

int main()
{
    int testy;
    int a,b,c;
    cin>>testy;
    while (testy)
    {
        cin>>a>>b>>c;
        if ( a*c <= b )
        {
             cout<< "yes" <<endl;
        }
        else
        {
            cout<< "no" <<endl;
        }
        testy--;
    }
    return 0;
}
