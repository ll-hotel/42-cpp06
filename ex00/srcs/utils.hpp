#ifndef UTILS_HPP
#define UTILS_HPP
#include <string>

bool is_double(const std::string &str);
bool is_float(const std::string &str);
bool is_int(const std::string &str);
bool is_char(const std::string &str);
double str_to_double(const std::string &str);
void display_value(double v);

#endif
