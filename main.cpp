#include <iostream>
#include "src/bloom_filter.h"

int main() {
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

    // std::cout << bloom_filter.is_full() << std::endl;

    return 0;
}
