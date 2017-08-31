#include <iostream>
#include <csignal>
using namespace std;

int main()
{
    raise(SIGSEGV);
    return 0;
}
