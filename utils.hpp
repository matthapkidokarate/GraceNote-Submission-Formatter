//
// Created by matth on 3/13/20.
//

#ifndef GRACENOTE_FORMAT_UTILS_HPP
#define GRACENOTE_FORMAT_UTILS_HPP

#include <string>
#include <iostream>

template <typename T, typename T2>
static inline bool safeAdd(T &number, T2 cap){

    ++number;
    return !(number >= cap);

}

#endif //GRACENOTE_FORMAT_UTILS_HPP
