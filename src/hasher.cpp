//
// Created by Matthieu on 20/01/2023.
//

#include <iostream>
#include "hasher.h"

template<>
Hasher<std::string>::Hasher(std::size_t c)
{
    Hasher::c = c;
}

/// FNV-1A 64-bit hashing algorithm
template<>
std::size_t Hasher<std::string>::operator()(std::string e) const
{
    std::size_t hash = c;
    for (char C : e) {
        hash ^= C;
        hash *= 0x00000100000001B3;
    }
    return hash;
}