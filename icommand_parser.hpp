#ifndef ICOMMAND_PARSER_HPP
#define ICOMMAND_PARSER_HPP

#include<vector>
#include<string>

using parsed_commands = std::vector<std::string>;

class icommand_parser
{
public:
    virtual ~icommand_parser() = 0;

    template<typename ...Args>
    void add_args(Args... args){

    }

    virtual void parse() = 0;

    virtual parsed_commands get_commands() = 0;
};

#endif // ICOMMAND_PARSER_HPP
