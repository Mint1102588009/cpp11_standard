#include <iostream>
#include <vector>
using namespace std;

int main () {
    int i;
    int j{};
    int* p;
    int* q{};
    cout << i << "," << j << endl;
    cout << (nullptr == p) << "," << (nullptr == q) << endl;

    int x1(5.3);
    int x2 = 5.3;
    //int x3{5.0}; error
    //int x4 = {5.3}; error

    char c1{7};
    //char c2{99999}; error

    vector<int> v1 {1, 2, 3, 4, 5};
    //vector<int> v2 {1, 2, 3, 4, 5.4}; error


    return 0;
}
