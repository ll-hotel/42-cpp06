#include "utils.hpp"

static bool is_char(const std::string &str);
static bool is_int(const std::string &str);
static bool is_float(const std::string &str);
static bool is_double(const std::string &str);

int	check_type(const std::string &str)
{
	static bool (*const fn[])(const std::string&) = {
		is_double,
		is_float,
		is_int,
		is_char,
	};
	int type;

	type = 0;
	while (type < 4 && !fn[type](str))
		type += 1;
	return type;
}

static bool is_char(const std::string &str)
{
	return (str.length() == 1 && !isdigit(str[0]));
}

static bool	is_int(const std::string &str)
{
	std::size_t i = 0;

	if (str.length() == 0)
		return false;
	if (!isdigit(str[0]) && str[0] != '-' && str[0] != '+')
		return false;
	else
		i += 1;
	for (; i < str.length(); i += 1) {
		if (!isdigit(str[i]))
			return false;
	}
	return true;
}

static bool	is_float(const std::string &str)
{
	std::size_t	i = 0;

	if (str == "nanf" || str == "+inff" || str == "-inff")
		return true;
	while (i < str.length() && isdigit(str[i]))
		i += 1;
	if (str[i++] != '.')
		return false;
	while (i < str.length() && isdigit(str[i]))
		i += 1;
	if (str[i++] != 'f')
		return false;
	return i == str.length();
}

static bool is_double(const std::string &str)
{
	std::size_t	i = 0;

	if (str == "nan" || str == "+inf" || str == "-inf")
		return true;
	while (i < str.length() && isdigit(str[i]))
		i += 1;
	if (str[i++] != '.')
		return false;
	while (i < str.length() && isdigit(str[i]))
		i += 1;
	return i == str.length();
}