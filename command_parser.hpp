#ifndef COMMAND_PARSER_HPP
#define COMMAND_PARSER_HPP
#include<icommand_parser.hpp>

class command_parser : public icommand_parser
{
public:
    command_parser()=default;
    ~command_parser()=default;

    command_parser(command_parser&& parser) = default;
    command_parser(const command_parser& parser) = default;

private:


}

#endif // COMMAND_PARSER_HPP
