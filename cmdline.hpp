#ifndef CMDLINE_HPP
#define CMDLINE_HPP

#include "commands.hpp"
#include "command_parser.hpp"

#include <vector>

namespace cmdline {

class manager {
public:
    manager(const std::vector<parser::icommand>& args) {

    }

private:
    cmdline::parser::command_parser m_parser;
};

}

#endif // CMDLINE_HPP
