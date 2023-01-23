//
// Created by Matthieu on 22/01/2023.
//

#define CATCH_CONFIG_MAIN

#include <C:\Users\Matthieu\UA\sem1\bloom_filter\include\catch2\catch.hpp>

#include "C:\Users\Matthieu\UA\sem1\bloom_filter\src\bloom_filter.h"

TEST_CASE()
{
    CHECK(1 == 1);
}

/*
TEST_CASE("Insert Test")
{
    std::string elements[] = {"Matthieu", "Larose", "bal", "Everzwijn"};
    std::string test_elements[] = {"Matthieu", "La", "baksteen", "Larose"};

    BloomFilter<std::string> bloom_filter (100, {0xcbf29ce484222325, 0xcbf29ce4842ff3ff, 0xcbf29ce484200000});

    for (std::string e: elements) {
        std::cout << e << std::endl;
        bloom_filter.insert(e);
    }

    for (std::string e: test_elements) {
        std::cout << e << ": " << bloom_filter.query(e) << std::endl;
    }

    CHECK(1 == 1);
}*/

/*TEST_CASE("Insertion-Query Test")
{

    std::string insert_elements[] = {"A Bloom filter is a probabilistic data structure", "used to check if a value is a member of a certain set.\n"
                                     "One of the main use-cases for this is to prevent expensive operations from being performed on\n"
                                     "elements that are not part of the given set."};
    std::string query_elements[] = {"Matthieu", "Larose", "bal", "Everzwijn"};

    BloomFilter<std::string> bloom_filter (100, {0xcbf29ce484222325, 0xcbf29ce4842ff3ff, 0xcbf29ce484200000});

    bloom_filter.insert("Matthieu");

    CHECK(bloom_filter.query("Matthieu"));
}*/

/*
TEST_CASE("Query Test")
{
    //BloomFilter<std::string> bloom_filter (5, {});
}
 */