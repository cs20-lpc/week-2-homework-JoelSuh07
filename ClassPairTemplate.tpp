// Implement  ClassPairTemplate class constructor and print methods
#include <iostream>
template <typename T1, typename T2>
Pair<T1, T2>::Pair(T1 f, T2 s) : first(f), second(s) {}

template <typename T1, typename T2>
void Pair<T1, T2>::print() const{
    std::cout << "(" << first << ", " << second << ")" << std::endl;
}