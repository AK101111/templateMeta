#pragma once

template <typename T, size_t _N>
class Array{
private:
    T _array[_N];
public:
    T& operator[] (const size_t& index){ 
        if(index >= _N)
            throw std::out_of_range("array::at");    
        return _array[index]; 
    }
    const T& operator[] (const size_t& index) const{ 
        if(index >= _N)                                                         
            throw std::out_of_range("array::at");    
        return _array[index]; 
    }
    template <typename... TT>
    Array(TT... ll) : _array{ll...}{};
    T* begin(){ return _array; }
    const T* begin() const{ return _array; }
    T* end(){ return _array + _N; }
    const T* end() const{ return _array + _N; }
    static constexpr size_t size() { return _N; }
};
