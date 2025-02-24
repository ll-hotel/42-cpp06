#include "utils.hpp"
#include <sstream>
#include <cmath>

double str_to_double(const std::string &str)
{
	std::stringstream ss;
	double d;

	if (str == "nanf" || str == "nan")
		return NAN;
	if (str == "+inf" || str == "+inff")
		return INFINITY;
	if (str == "-inf" || str == "-inff")
		return -INFINITY;
	ss << str;
	ss >> d;
	return d;
}
