#include <iostream>

using namespace std;

int main()
{
    int testy;
    cin>>testy;
    while(testy--)
    {
        unsigned long long int n, kwadraty=0;
        cin>>n;
        kwadraty = ((2*n+1)*(n+1)*n)/6; // algorytm na sume kwadratow utworzonych w kwadracie o wymiarach n x n
        cout<<kwadraty<<"\n";
    }
    return 0;
}
