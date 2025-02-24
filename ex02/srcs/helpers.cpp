#include "helpers.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>
#include <iostream>

Base *generate(void)
{
        Base *ptr = 0;

        switch (std::rand() % 3) {
        case 0:
                ptr = new A();
                break;
        case 1:
                ptr = new B();
                break;
        case 2:
                ptr = new C();
        default:
                break;
        }
        return ptr;
}

void identify(Base *p)
{
        std::cout << p << " is an pointer of an instance of ";
        if (dynamic_cast<A *>(p) != 0)
                std::cout << 'A' << std::endl;
        else if (dynamic_cast<B *>(p) != 0)
                std::cout << 'B' << std::endl;
        else if (dynamic_cast<C *>(p) != 0)
                std::cout << 'C' << std::endl;
}
