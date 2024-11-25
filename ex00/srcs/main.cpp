#include "ScalarConverter.hpp"
#include <iostream>

int	main(int argc, const char *argv[])
{
	if (argc < 2) {
		std::cout << "Usage: " << argv[0] << " <value>..." << std::endl;
		return 1;
	}
	for (int i = 1; i < argc; i += 1) {
		ScalarConverter::convert(std::string(argv[i]));
	}
	return 0;
}
