#include <iostream>
#include "radix_heap.h"
#include <stxxl/vector>

int main() {
    std::cout << "testing" << std::endl;
    radix_heap::pair_radix_heap<int, std::string> rh;
    rh.push(3, "three");
    std::cout << rh.empty() << std::endl;
    std::cout << rh.top_value() << std::endl;


    stxxl::vector<int> v;
    std::cout << v.empty() << std::endl;

    return 0;
}