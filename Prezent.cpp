#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int liczba;
    vector<int> vec;
    int MAX;
    int r;
    while(true)
    {
        cin>>liczba;
        if(liczba!=0)
        {
            vec.push_back(liczba);
        }
        else
        {
            break;
        }

    }
    sort(vec.begin(),vec.end());
    r = vec.size();
    MAX = vec[r-1];

    if(MAX == vec[0])
    {
        cout<<MAX<<endl;
    }
    else
    {
        for(int i=vec.size()-1; i>=0; i--)
        {
            if(vec[i]!=MAX)
            {
                cout<<vec[i]<<endl;
                break;
            }
        }
    }
}
