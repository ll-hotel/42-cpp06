#ifndef SCALAR_CONVERTER_HPP
#define SCALAR_CONVERTER_HPP
#include <string>

class ScalarConverter {
public:
	ScalarConverter(void);
	ScalarConverter(const ScalarConverter&);
	virtual ~ScalarConverter(void) = 0;

	static void	convert(const std::string&);
};

#endif
