#include <iostream>
/**
*This program is to distinguish NULL and nullptr.
*NULL is a macro which is defined in header file.
*nullptr is a key word which is newly increased in c++11.
*/
void f(int){
    std::cout << "compiler selected f(int)" << std::endl;
}

void f(void*){
    std::cout << "compiler selected f(void*)" << std::endl;
}

int main(){
    f(0);
    //f(NULL);//call f(NULL) is ambiguous
    f(nullptr);

    return 0;
}
