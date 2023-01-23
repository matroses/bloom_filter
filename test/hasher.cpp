//
// Created by Matthieu on 22/01/2023.
//

#define CATCH_CONFIG_MAIN

#include <C:\Users\Matthieu\UA\sem1\bloom_filter\include\catch2\catch.hpp>

#include "C:\Users\Matthieu\UA\sem1\bloom_filter\src\hasher.h"

TEST_CASE("Hash Function Collisions Test")
{
    std::size_t bit_size = 100;
    std::set<int> hashed_integers;

    std::string string_array[] = {"Matthieu", "Larose", "bal", "Everzwijn"};

    const Hasher<std::string> hasher (0xcbf29ce484222325);

    for (std::string str : string_array) {
        hashed_integers.insert(hasher(str) & (bit_size - 1));
    }

    std::cout << (string_array->size() - hashed_integers.size());

    CHECK((string_array->size() - hashed_integers.size()) < 3);
}