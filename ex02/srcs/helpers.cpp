#include "helpers.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>
#include <iostream>

Base *generate(void)
{
        static unsigned int seed = 0;
        Base *ptr = 0;

        if (seed == 0) {
                seed = time(0);
                std::srand(seed);
        }
        switch (std::rand() % 3) {
        case 0:
                ptr = new A();
                break;
        case 1:
                ptr = new B();
                break;
        case 2:
                ptr = new C();
                break;
        }
        return ptr;
}

void identify(Base *p)
{
        std::cout << p << " is an pointer of an instance of ";
        if (dynamic_cast<A *>(p) != 0)
                std::cout << 'A';
        else if (dynamic_cast<B *>(p) != 0)
                std::cout << 'B';
        else if (dynamic_cast<C *>(p) != 0)
                std::cout << 'C';
        std::cout << std::endl;
}
