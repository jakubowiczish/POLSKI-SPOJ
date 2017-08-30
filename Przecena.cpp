#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double a,b;
    // potencjalna cena poczatkowa z ktorej liczymy procenty - ustawiam na 100 dla ulatwienia rachunkow
    int testy;
    cin>>testy;
    while(testy--)
    {
        cin>>a>>b;
        double wynik = (100-((100-a)-(b/100)*(100-a)));
        cout<<fixed;
        cout<<setprecision(2)<<wynik<<"\n";
    }
    return 0;
}
