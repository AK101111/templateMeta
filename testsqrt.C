#include <iostream>
#include "reallyFastSqrt.hpp"
// compile with -std=c++14
// <arnav.kansal@nyu.edu>

template<int N>
struct A {
    int arr[N];
    constexpr A() : arr(){
        for(int i=0; i<N; ++i)
            arr[i] = sqrt(i);
    }
};

int main(){
    constexpr auto a = A<10001>();
    std::cout << "sqrt of 42: " << a.arr[42] << std::endl;
    std::cout << "sqrt of 100: " << a.arr[100] << std::endl;
    std::cout << "sqrt of 1000: " << a.arr[1000] << std::endl;
    std::cout << "sqrt of 10000: " << a.arr[10000] << std::endl;
    return 0;
}
