#include "ScalarConverter.hpp"
#include "utils.hpp"
#include <iostream>

ScalarConverter::ScalarConverter(void)
{}

ScalarConverter::ScalarConverter(const ScalarConverter&)
{}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter &)
{
	return *this;
}

void ScalarConverter::convert(const std::string &str)
{
	double value;

	if (is_double(str) || is_float(str) || is_int(str)) {
		value = str_to_double(str);
	} else if (is_char(str)) {
		value = static_cast<double>(str[0]);
	} else {
		std::cerr << "Unrecognized value." << std::endl;
		return;
	}
	display_value(value);
}
