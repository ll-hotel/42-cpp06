#ifndef DATA_HPP
#define DATA_HPP

#include <string>
class Data
{
private:
        const std::string _data;

public:
        Data(void);
        Data(const Data &);
        Data(const std::string &data);
        ~Data(void);
        Data operator=(const Data &);

        const std::string &getData(void);
};

#endif
