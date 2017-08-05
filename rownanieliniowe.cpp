#include <iostream>
#include <iomanip>
using namespace std;
double a,b,c;

int main()
{
   cin>>a>>b>>c;
   if ((c-b)==0&&a==0)
    cout<<"NWR";
   else if((c-b)!=0&&a==0)
    cout<<"BR";
   else
   {
        double wynik=(c-b)/a;
        cout.setf (ios::fixed);
        cout.precision(2);
        cout<<wynik;

   }




return 0;
}
