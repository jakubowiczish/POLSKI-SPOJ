#include <iostream>

using namespace std;

int main()
{
    char znak;
    int wynik,a,b;
while(cin>>znak>>a>>b)
{
    switch(znak)
    {
    case '+':
        wynik=a+b;
        break;
    case '-':
        wynik=a-b;
        break;
    case '*':
        wynik=a*b;
        break;
    case'/':
        wynik=a/b;
        break;
    case '%':
        wynik=a%b;
        break;

    }
cout<<wynik<<endl;
}


    return 0;
}
