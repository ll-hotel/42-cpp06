#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP
#include <stdint.h>
#include "Data.hpp"

class Serializer {
private:
	Serializer(void);
	Serializer(const Serializer&);
public:
	virtual ~Serializer(void) = 0;

	static uintptr_t serialize(Data *ptr);
	static Data* deserialize(uintptr_t raw);
};

#endif
