#include <iostream>
#include <ctime>
#include <cstdlib>
#include <limits.h>
/*
Dane s¹ definicje:
const
max1 = 100;
max2 = 2000;
type
table = array[1..max1, 1..max2] of real;
Proszê napisaæ procedurê, która dla zmiennej typu table zwraca numer wiersza i kolumny
elementu, dla którego suma otaczaj¹cych go elementów jest najmniejsza.
*/
using namespace std;
const int N = 5;

void set_table(int tab[N][N]);
void print_table(int tab[N][N]);
void findSmallestSum(int tab[N][N]);
bool isIndexValid(int w, int k);

int main()
{
    int tab[N][N];
    cout << "Zainicjalizowana tablica: " << endl << endl;
    set_table(tab);
    findSmallestSum(tab);
    return 0;
}

void findSmallestSum(int tab[N][N])
{
    int d_x[] = {-1,0,1,-1,1,-1,0,1};
    int d_y[] = {-1,-1,-1,0,0,1,1,1};

    int sum[N][N];
    int minSum = INT_MAX;

    for(int i=0; i < N; i++)
        for(int j=0; j < N; j++)
            sum[i][j] = 0;

    int row = 0;
    int column = 0;

    cout << "Tablica sum: " << endl << endl;
    for(int i=0; i < N; i++)
    {
        for(int j=0; j < N; j++)
        {
            for(int n_id=0; n_id < 8; n_id++)
            {
                if(isIndexValid(i + d_y[n_id],j + d_x[n_id]))
                {
                    sum[i][j] += tab[i + d_y[n_id]][j + d_x[n_id]];
                }
            }
            if(sum[i][j] < minSum)
            {
                minSum = sum[i][j];
                row = i;
                column = j;
            }
            cout << sum[i][j] <<"\t";
        }
        cout << endl << endl;
    }
    cout << "Row: " << row << endl;
    cout << "Column: " << column << endl;

}

bool isIndexValid(int w, int k)
{
    if(w >= 0 and k >= 0 and w < N and k < N)\
        return true;
    return false;
}
void set_table(int tab[N][N])
{
    srand(time(NULL));
    for(int i=0; i<N; i++) // wyswietlanie tablicy
    {
        for(int j=0; j<N; j++)
        {
            tab[i][j] = rand() % 50 + 1;
            cout<<tab[i][j]<<"\t";
        }
        cout<<endl<<endl;
    }
}

void print_table(int tab[N][N])
{
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<N; j++)
        {
            cout<<tab[i][j]<<"\t";
        }
        cout<<endl<<endl;
    }
}
