#include <iostream>
#include <vector>
#include "point.h"
//using namespace std;
template <typename T>
T arifm(const std::vector<T>& A){
    T sum{};
    for(const auto& c: A) {
         sum=sum + c;
    }
    return sum/A.size();
}
int main()
{
    std::vector<int> A(8,9);
    std::vector<float> B(4,4.5);
    std::cout<<"\n"<<arifm(A)<<"\t"<<arifm(B)<<std::endl;

    std::vector<point<int>> p{{9, 0}, {1, 2}};
    std::cout << arifm(p);
}
