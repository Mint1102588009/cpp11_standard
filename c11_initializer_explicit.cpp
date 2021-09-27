#include <iostream>
using namespace std;

class P
{
public:
    P(int a, int b) {
        cout << "Call P(int a, int b)" << endl;
    }

    P(initializer_list<int>) {
        cout << "Call P(initializer_list<int>)" << endl;
    }

    explicit P(int a, int b, int c) {
        cout << "Call explicit P(int a, int b, int c)" << endl;
    }
};

void fp(const P&) {};

int main () {
    P p1 (11, 77);//Call P(int a, int b)
    P p2 {11, 77};//Call P(initializer_list<int>)
    P p3 {11, 77, 88};//Call P(initializer_list<int>)
    P p4 = {11, 77};//Call P(initializer_list<int>)
    P p5 = {11, 77, 88};//Call P(initializer_list<int>) ! it may cause some issues in other version standard
    P p6 (11, 77, 88);//Call explicit P(int a, int b, int c)

    fp( {22, 33});//Call P(initializer_list<int>)
    fp( {22, 33, 55});//Call P(initializer_list<int>)
    fp( P{22, 33});//Call P(initializer_list<int>) ! it may cause some issues in other version standard
    fp( P{22, 33, 55});//Call P(initializer_list<int>)

    P p11 {1, 2, 3, 4};//Call P(initializer_list<int>)
    P p12 = {1, 2, 3, 4};//Call P(initializer_list<int>)
    P p13 {10};//Call P(initializer_list<int>)

    return 0;
}
