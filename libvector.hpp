#ifndef LIBVECTOR_HPP_
#define LIBVECTOR_HPP_

#include <cmath>

namespace vector {
    template<typename T>
    struct vec2 {
        T x, y;

        T length() { return std::sqrt((x * x) + (y * y)); }
        vec2<T> normalise() { 
            T length = this->length();

            if(length == 0) return *this;
            vec2<T> b{x / length, y / length};
            return b;
        }

        bool is_zero() { return x == 0 && y == 0; }
    };
}

#endif