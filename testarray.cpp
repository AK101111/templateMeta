#include <iostream>
#include "array.hpp"

int main(){
    Array<std::string, 3> a = {"i", "ii", "iii"};
    for(size_t i=0; i < a.size(); ++i)
        std::cout << a[i] << std::endl;
    for(size_t i=0; i < a.size(); ++i)
        a[i] = "a";
    for(auto& aa: a)
        std::cout << aa << std::endl;
    return 0;
}
