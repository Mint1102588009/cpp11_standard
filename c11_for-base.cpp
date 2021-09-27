#include <iostream>
#include <vector>
using namespace std;

int main () {
    int a[] = {1, 2, 3, 4, 5, 6};
    for(int i: a) {
        cout << i << ", ";
    }
    cout << endl;

    for(int i: {9, 8, 7, 6, 5, 4, 3, 2, 1}) {
        cout << i << ", ";
    }
    cout << endl;

    vector<int> vec {9, 8, 7, 6, 5, 4, 3, 2, 1};
    cout << "vector:" << endl;
    for(auto elem: vec) {
        cout << elem << ", ";
    }
    cout << endl;

    cout << "vector&:" << endl;
    for(auto& elem: vec) {
        elem *= 3;
    }
    for(auto elem: vec) {
        cout << elem << ", ";
    }
    cout << endl;

    return 0;
}
