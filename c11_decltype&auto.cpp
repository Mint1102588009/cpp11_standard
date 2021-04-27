#include <iostream>
/**
*A simple program to parse the difference of decltype and auto.
*/
int main(){
    int n = 10;
    int& a = n;
    auto b = a;//auto will not declare b as reference type.
    b = 33;
    std::cout << n << "," << a << "," << b << std::endl;

    decltype(a) c = n;//decltype will determine a as reference type to c.
    c = 77;
    std::cout << n << "," << a << "," << c << std::endl;

    return 0;
}
