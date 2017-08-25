#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    double x,y,z;
     while (cin >> x >> y >> z) {
        int tab[] = {x, y, z};
        sort(tab, tab+3);
        if (tab[0] + tab[1] <= tab[2])
        {
            cout<<"brak\n";
        }
        else if(tab[0] * tab[0] + tab[1] * tab[1] == tab[2] * tab[2] )
        {
            cout<<"prostokatny\n";
        }
        else if(tab[0] * tab[0] + tab[1] * tab[1] > tab[2] * tab[2] )
        {
            cout<<"ostrokatny\n";
        }
        else
        {
            cout<<"rozwartokatny\n";
        }
     }
}

// WSZYSTKIE TESTY PRZECHODZA, SEDZIA NIE PRZYJMUJE
    /*
int main()
{
    double bok[3];
    while (cin>>bok[0]>>bok[1]>>bok[2])
    {
        bubbleSort (bok, 3);
        if ((bok[0] + bok[1] > bok[2]) && (bok[1] + bok[2] > bok[0]) &&(bok[0] + bok[2] > bok[1])&&(bok[1])> 0 &&(bok [2])> 0 &&(bok[3])> 0)
        {
            if (bok[0]*bok[0] + bok[1]*bok[1] == bok[2]*bok[2]) {cout<<"prostokatny\n";}
            if (bok[0]*bok[0] + bok[1]*bok[1] > bok[2]*bok[2]) {cout<<"ostrokatny\n";}
            if (bok[0]*bok[0] + bok[1]*bok[1] < bok[2]*bok[2]) {cout<<"rozwartokatny\n";}
        }
        else
            cout<<"brak\n";
    }

    return 0;
    */
}
/*
void bubbleSort(double numbers[], int array_size) //sortowanie babelkowe, skopiowana funkcja
{
  int i, j, temp;

  for (i = (array_size - 1); i > 0; i--)
  {
    for (j = 1; j <= i; j++)
    {
      if (numbers[j-1] > numbers[j])
      {
        temp = numbers[j-1];
        numbers[j-1] = numbers[j];
        numbers[j] = temp;
      }
    }
  }
}
*/
