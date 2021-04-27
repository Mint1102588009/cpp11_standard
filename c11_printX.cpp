#include <iostream>
#include <bitset>

void printX(){
}

template <typename T, typename... Types>
void printX(const T& firstArg, const Types&... args){
    std::cout << firstArg << std::endl;
    printX(args...);
}

template <typename... Types>
void printX(const Types&... args){
    std::cout << "Variadic Templates first" << std::endl;
    printX(args...);
}

int main(){
    printX(7.5, "hello", std::bitset<16>(377), 42);
    return 0;
}
