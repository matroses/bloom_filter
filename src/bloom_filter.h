//
// Created by Matthieu on 21/01/2023.
//

#ifndef BLOOM_FILTER_BLOOM_FILTER_H
#define BLOOM_FILTER_BLOOM_FILTER_H

#include <cstddef>
#include <vector>
#include "hasher.h"

template<typename ElementType>
class BloomFilter {
public:
    BloomFilter(std::size_t, std::vector<std::size_t>);

    void insert(const ElementType&);

    bool query(const ElementType&) const;

    bool is_full() const;

private:
    std::vector<bool> bits;
    std::vector<Hasher<ElementType>> hashers;
};

#endif //BLOOM_FILTER_BLOOM_FILTER_H
