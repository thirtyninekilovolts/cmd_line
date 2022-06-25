#ifndef ICOMMAND_PARSER_HPP
#define ICOMMAND_PARSER_HPP

#include<vector>
#include<string>

namespace cmdline {
namespace parser {

using parsed_commands = std::vector<std::string>;

class icommand_parser
{
public:
    virtual ~icommand_parser() = 0;

    template<typename ...Args>
    void add_args(Args... args){

    }

    virtual void parse() = 0;
};

} // parser
} // cmdline

#endif // ICOMMAND_PARSER_HPP
