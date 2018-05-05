#include <iostream>

/// adding two big integers
std::string add(std::string s1, std::string s2);

int main() {
    std::ios::sync_with_stdio(false);
    int t;
    std::cin >> t; /// number of tests
    std::string s1, s2;
    while(t--){
        std::cin >> s1 >> s2;
        std::cout << add(s1,s2) << std::endl;
    }

    return 0;
}

std::string add(std::string s1, std::string s2)
{
    int i = s1.length();
    int j = s2.length();

    int min = i;
    if(j < i) min = j; /// length of shorter of two strings

    int p = 0;

    std::string result = "";

    int val = 0;
    for(int it = 1; it <= min; it++){
        val = (int)(s1[--i]) + (int)(s2[--j]) + p - 96;
        p = val / 10;
        result = (char)((val % 10) + 48) + result;
    }

    while(i){
        val = s1[--i] + p - 48;
        p = val / 10;
        result = (char)((val % 10) + 48) + result;
    }

    while(j){
        val = s2[--j] + p - 48;
        p = val / 10;
        result = (char)((val % 10) + 48) + result;
    }

    if(p) result = (char)(p + 48) + result;

    return result;
}