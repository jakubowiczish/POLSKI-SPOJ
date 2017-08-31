#include <iostream>
#include <csignal>
using namespace std;

int main()
{
    raise(SIGALRM);
    return 0;
}
