#include <iostream>
#include <initializer_list> //unnecessary

class P
{
public:
    P(int a, int b){
        std::cout << "P(int,int):a=" << a << " b=" << b << std::endl;
    }
    P(std::initializer_list<int> initlist){
        std::cout << "P(std::initializer_list<int> initlist):" << std::endl;
        for(auto i : initlist)
            std::cout << i << " ";
        std::cout << std::endl;
    }
};

void print(std::initializer_list<int> vals)
{
    for(auto it = vals.begin(); it != vals.end(); ++it){
        std::cout << *it << std::endl;
    }
}

int main()
{
    print({7,6,5,4,3,2,1});
    P p(77,5);
//    P p(77,5,42);
    P q{77,5};
    P r{77,5,42};
    P s = {77,5};

    return 0;
}
