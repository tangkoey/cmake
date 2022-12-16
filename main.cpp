#include <iostream>
#include <concepts>

template <typename T>
// requires std::is_integral<T>
T f(T a, T b){
    return a+b;
}

int main(){
    std::cout << "Building from W/L." << std::endl; 
    std::cout << f(7, 5) << std::endl; 
}