#ifndef LIBVECTOR_HPP_
#define LIBVECTOR_HPP_

#include <cmath>

template<typename T>
struct Vector2 {
    T x, y;

    T length() { return std::sqrt((x * x) + (y * y)); }
    Vector2<T> normalise() { 
        T length = this->length();

        if(length == 0) return *this;
        Vector2<T> b{x / length, y / length};
        return b;
    }

    bool is_zero() { return x == 0 && y == 0; }
};

#endif