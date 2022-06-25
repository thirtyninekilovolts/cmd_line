#include <iostream>
#include <string>
#include "cmdline.hpp"


int main(int argc, const char** argv)
{


    std::cout << "count of args" << argc << '\n';
    std::cout << "args are:\n";

    std::vector<std::string> commands;
    for(std::size_t s{}; s< argc; ++s)
    {
        std::cout << argv[s] << '\n';
        commands.emplace_back(argv[s]);
    }

    cmdline::manager cli(commands);

    char* buf;
    while ((buf = readline(">> ")) != nullptr) {
    if (strlen(buf) > 0) {
      add_history(buf);
    }

    printf("[%s]\n", buf);

    // readline malloc's a new buffer every time.
    free(buf);
    }

    return 0;
}
