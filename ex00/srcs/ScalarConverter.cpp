#include "ScalarConverter.hpp"
#include "utils.hpp"
#include <iostream>

ScalarConverter::ScalarConverter(void)
{}

ScalarConverter::ScalarConverter(const ScalarConverter&)
{}

void ScalarConverter::convert(const std::string &str)
{
	const int type = check_type(str);
	double value;

	if (type == 4) {
		std::cerr << "Unrecognized value." << std::endl;
		return;
	}
	if (type == 3)
		value = static_cast<double>(str[0]);
	else
		value = strtod(str);
	display_value(value);
}
