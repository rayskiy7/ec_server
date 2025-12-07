#pragma once

#include <chrono>
#include <regex>

enum class Realization{lowlevel, async};

struct ServerConfig
{
    std::regex cmd_pattern;
    chrono::milliseconds udp_timeout;
    int port;
};

extern ServerConfig DEFAULT_CONFIG;

ServerConfig get_defaults() noexcept;
ServerConfig parse_args(int argc, char* argv[]) noexcept;
