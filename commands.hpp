#ifndef COMMANDS_HPP
#define COMMANDS_HPP

namespace cmdline {
namespace parser {

struct icommand{
    std::string m_name;
    std::string value;
};

struct parser_command : public icommand{};

struct history_command : public icommand{};



}

}

#endif // COMMANDS_HPP
