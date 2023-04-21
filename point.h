#ifndef POINT_H
#define POINT_H
#pragma once
#include <vector>
#include <iostream>
template <typename X>
struct point
{
    X X_{0};
    X Y_{0};

    point<X> operator + (const  point &c){
        point temp;
        temp.X_=X_+c.X_;
        temp.Y_=Y_+c.Y_;
        return temp;
    }
    friend std::ostream& operator<<(std::ostream& os,point<X> c) {
        os << c.X_ << ", " << c.Y_;
    }
    point<X> operator / (const size_t c){
        point temp;
        temp.X_=X_/c;
        temp.Y_=Y_/c;
        return temp;
    }
};
#endif // POINT_H
