//
// Created by Matthieu on 21/01/2023.
//

#include <iostream>
#include "bloom_filter.h"

template<>
BloomFilter<std::string>::BloomFilter(std::size_t bit_size, std::vector<std::size_t> hash_initialization_constants)
{
    bits.assign(bit_size, false);

    for (std::size_t c: hash_initialization_constants) {
        hashers.push_back(Hasher<std::string> (c));
    }
}

template<>
void BloomFilter<std::string>::insert(const std::string& e)
{
    for (Hasher hasher : hashers) {
        bits[hasher(e) & (bits.size() - 1)] = true;
    }
}

template<>
bool BloomFilter<std::string>::query(const std::string& e) const
{
    for (Hasher hasher: hashers) {
        if (bits[hasher(e) & (bits.size() - 1)] == false) return false;
    }
    return true;
}

template<>
bool BloomFilter<std::string>::is_full() const
{
    return std::find(bits.begin(), bits.end(), false) == bits.end();
}