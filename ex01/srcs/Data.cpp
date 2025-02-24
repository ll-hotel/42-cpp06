#include "Data.hpp"

Data::Data(void) : _data() {}

Data::Data(const Data &other) : _data(other._data) {}

Data::Data(const std::string &data) : _data(data) {}

Data::~Data(void) {}

Data Data::operator=(const Data &) { return *this; }

const std::string &Data::getData(void) { return _data; }
