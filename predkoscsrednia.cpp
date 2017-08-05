#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    int testy;
    cin>>testy;
    for (int i=0; i<testy; i++)
    {
    cin>>a>>b;
    cout<<(2*a*b)/(a+b)<<endl;
    }


    return 0;
}
