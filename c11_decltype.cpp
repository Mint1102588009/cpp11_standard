#include <iostream>
#include <list>

template <typename T>
class Container{
public:
    void print(T& t){
        for(m_it = t.begin(); m_it != t.end(); ++m_it){
            std::cout << "value:" << *m_it << std::endl;
        }
    }
private:
    decltype(T().begin()) m_it;
};

int main(){
    std::list<int> l{7,6,5,4,3,2,1,0};
    Container<std::list<int>> co;
    co.print(l);
    return 0;
}
