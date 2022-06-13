#include <iostream>
#include <string>
#include "readline/readline.h"
#include "command_parser.hpp"

int main(int argc, const char** argv)
{

    std::cout << "count of args" << argc << '\n';
    std::cout << "args are:\n";



    for(std::size_t s{}; s< argc; ++s)
    {
        std::cout << argv[s] << '\n';
    }
    return 0;
}
