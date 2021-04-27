#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main(){
    using std::string;
    std::vector<int> v1 {2,5,7,13,69,83,50};
    std::vector<int> v2 ({2,5,7,13,69,83,50});
    std::vector<int> v3;
    v3 = {2,5,7,13,69,83,50};
    v3.insert(v3.begin()+2, {0,1,2,3,4});
    for(auto i : v3)
        std::cout << i << ' ';
    std::cout << std::endl;

    std::cout << std::max({string("Ace"),string("Stacy"),
                  string("Sabrina"),string("Barkley")})
                << std::endl;
    std::cout << std::min({string("Ace"),string("Stacy"),
                  string("Sabrina"),string("Barkley")})
                << std::endl;
    std::cout << std::max({54, 16, 48, 5})<< std::endl;
    std::cout << std::min({54, 16, 48, 5})<< std::endl;

    return 0;
}
