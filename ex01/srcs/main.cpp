#include "Serializer.hpp"
#include <iostream>

int main(void)
{
        Data hello("Hello, World!");

        uintptr_t hello_raw = Serializer::serialize(&hello);
        Data *hello_ptr = Serializer::deserialize(hello_raw);

        std::cout << "Before serialization: data: " << hello.getData()
                  << std::endl;
        std::cout << "Serialized ptr: " << hello_raw << std::endl;
        std::cout << "Deserialized ptr: " << hello_ptr << std::endl;
        std::cout << "After serialization: data: " << hello_ptr->getData()
                  << std::endl;
}
