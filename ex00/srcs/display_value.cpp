#include "utils.hpp"
#include <cfloat>
#include <climits>
#include <cmath>
#include <iostream>

static void display_char(double v);
static void display_int(double v);
static void display_float(double v);
static void display_double(double v);

void display_value(double v)
{
	display_char(v);
	display_int(v);
	display_float(v);
	display_double(v);
}

static void display_char(double v)
{
	if (std::isinf(v) || std::isnan(v) || v < CHAR_MIN || v > CHAR_MAX) {
		std::cout << "char: Impossible" << std::endl;
		return;
	}
	const char c = static_cast<char>(v);
	if (c < 0 || c == 127 || !isprint(c)) {
		std::cout << "char: Non displayable" << std::endl;
		return;
	}
	std::cout << "char: " << c << std::endl;
}

static void display_int(double v)
{
	if (std::isinf(v) || std::isnan(v) || v < INT_MIN || v > INT_MAX) {
		std::cout << "int: Impossible" << std::endl;
		return;
	}
	const int c = static_cast<int>(v);
	std::cout << "int: " << c << std::endl;
}

static void display_float(double v)
{
	const float f = static_cast<float>(v);

	std::cout << "float: ";
	std::cout << f;
	if (!std::isinf(f) && !std::isnan(f) && std::floor(f) == f)
		std::cout << ".0";
	std::cout << "f" << std::endl;
}

static void display_double(double v)
{
	std::cout << "double: " << v;
	if (!std::isinf(v) && !std::isnan(v) && std::floor(v) == v)
		std::cout << ".0";
	std::cout << std::endl;
}
