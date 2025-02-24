#include "helpers.hpp"

int main(void)
{
        Base *ptr = 0;

        for (int i = 0; i < 8; i += 1) {
                ptr = generate();
                identify(ptr);
                delete ptr;
        }
}
