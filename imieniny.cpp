#include <iostream>

using namespace std;

int main()
{
    int cukierki,ludzie;
    int testy;
    cin>>testy;

    while (testy--)
    {
        cin>>ludzie>>cukierki;

    ludzie--;
    if (ludzie>cukierki) {cout<<"TAK"<<endl; continue;}
    if (ludzie==0 && cukierki > 0) {cout<<"TAK"<<endl; continue;}
    if (cukierki==0) {cout<<"NIE"<<endl; continue;}
    if (cukierki%ludzie > 0) {cout<<"TAK"<<endl; continue;}
    else
        cout<<"NIE"<<endl;
    }
    return 0;
}
