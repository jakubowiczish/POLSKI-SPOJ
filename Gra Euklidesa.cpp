#include <iostream>

using namespace std;

int main()
{
    int a,b;
    int partie;
    cin>>partie;
    while(partie--)
    {
        cin>>a>>b;
        while(a != b)
        {
            if (a < b)
            {
                b = b - a;
            }
            else if (b < a)
            {
                a = a - b;
            }
        }
    cout<<a + b<<endl;
    }
    return 0;
}
