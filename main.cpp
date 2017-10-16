#include <iostream>
#include "radix_heap.h"
#include <stxxl/vector>

int main() {

    radix_heap::pair_radix_heap<uint32_t , std::string> rh;
    rh.push(3, "three");
    rh.push(2, "two");

    std::cout << rh.size() << std::endl;




    return 0;
}