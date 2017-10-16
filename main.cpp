#include <iostream>
#include "radix_heap.h"

int main() {
    //TODO Try different value types. Why is std::string not working?
    radix_heap::pair_radix_heap<uint32_t , std::string> rh;

    std::cout << "is empty after declaration: " << rh.empty() << std::endl;
    rh.push(13, "thirteen");
    rh.push(52, "fifty-two");
    rh.push(12, "twelve");
    std::cout << "min key before pop: " << rh.min_key() << std::endl;
    std::cout << "top key before pop: " << rh.top_key() << std::endl;
    std::cout << "top value before pop: " << rh.top_value() << std::endl;
    std::cout << "size before pop: " << rh.size() << std::endl;
    rh.pop();
    std::cout << "size after pop: " << rh.size() << std::endl;
    std::cout << "min key after pop: " << rh.min_key() << std::endl;
    std::cout << "top key after pop: " << rh.top_key() << std::endl;
    std::cout << "top value after pop: " << rh.top_value() << std::endl;

    rh.clear();

    std::cout << "is empty after clear(): " << rh.empty() << std::endl;
    rh.push(14, "fourteen");
    rh.push(53, "fourty-three");
    rh.push(13, "thirteen");
    std::cout << "min key before pop: " << rh.min_key() << std::endl;
    std::cout << "top key before pop: " << rh.top_key() << std::endl;
    std::cout << "top value before pop: " << rh.top_value() << std::endl;
    std::cout << "size before pop: " << rh.size() << std::endl;
    rh.pop();
    std::cout << "size after pop: " << rh.size() << std::endl;
    std::cout << "min key after pop: " << rh.min_key() << std::endl;
    std::cout << "top key after pop: " << rh.top_key() << std::endl;
    std::cout << "top value after pop: " << rh.top_value() << std::endl;

    //rh.push(6, x); // test whether monotonous characteristic of keys holds





    return 0;
}