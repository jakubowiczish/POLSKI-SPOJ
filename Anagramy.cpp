#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    std::ios::sync_with_stdio(false);
    string anagram;
    int ile;
    int licznik = 0;
    cin>>anagram>>ile;
    sort(anagram.begin(),anagram.end());
    for(int i=0; i<ile; i++)
    {
        string czyanagram;
        cin>>czyanagram;
        if(anagram.length() == czyanagram.length())
        {
            sort(czyanagram.begin(),czyanagram.end());
            if(anagram == czyanagram)
            {
                licznik++;
            }
        }
    }
    cout<<licznik;
    return 0;
}
