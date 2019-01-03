#include <iostream>

template<int N>
struct fib{
    int value;
    constexpr fib() : value(){
        value = fib<N-1>().value + fib<N-2>().value;
    }
};

template<>
struct fib<0>{
    int value = 1;
};

template<>
struct fib<1>{
    int value = 1;
};

template<>
struct fib<2>{
    int value = 1;
};

int main () 
{ 
    constexpr int res = fib<25>().value;
    std::cout << res << std::endl;
    return 0; 
} 
