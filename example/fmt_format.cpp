#include "fmt_format.h"

void fmt_format()
{    std::string msg = fmt::format("The answer is {}.\n", 42);
    std::cout << msg << std::endl;
}