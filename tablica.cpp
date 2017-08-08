#include <iostream>
#include <vector>
using namespace std;

int main()
{
   int x;
   vector <int> tab;

   while (cin>>x)
   {
       tab.push_back(x);
   }
   for (int i=tab.size()-1; i>=0; i--)
   {
       cout<<tab[i]<<" ";
   }
}
