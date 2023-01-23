//
// Created by Matthieu on 20/01/2023.
//

#ifndef BLOOM_FILTER_HASHER_H
#define BLOOM_FILTER_HASHER_H

#include <cstddef>

template<typename ElementType>
class Hasher {

public:
    std::size_t c{};

    Hasher(std::size_t);

    std::size_t operator() (ElementType) const;
};

#endif //BLOOM_FILTER_HASHER_H
