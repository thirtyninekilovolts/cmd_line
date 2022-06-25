#ifndef COMMAND_PARSER_HPP
#define COMMAND_PARSER_HPP
#include "icommand_parser.hpp"
extern "C"
{
#include "readline/readline.h"
#include "readline/history.h"
}

namespace cmdline {
namespace parser {


class command_parser : public icommand_parser
{
public:
    command_parser()=default;
    ~command_parser()=default;

    command_parser(command_parser&& parser) = default;
    command_parser(const command_parser& parser) = default;

    void parse() override{

    }

private:


};

} // parser
} // cmdline

#endif // COMMAND_PARSER_HPP
