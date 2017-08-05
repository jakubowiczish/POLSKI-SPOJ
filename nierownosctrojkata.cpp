#include <iostream>

using namespace std;

int main()
{
    double a,b,c;
    int odpowiedz;
    while(cin>>a>>b>>c)
    {
        if (a<=0||b<=0||c<=0)
        {
            odpowiedz = 0;
        }

        else if ((a+b)<c || (a+c)<b || (b+c)<a)
        {
             odpowiedz = 0;
        }

        else
        {
            odpowiedz = 1;
        }
    cout<<odpowiedz<<endl;


    }
    return 0;
}
