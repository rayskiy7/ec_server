#include <chrono>
#include <regex>
#include <iostream>
#include "../../inc/config.h"

using namespace std;
using namespace chrono;

ServerConfig get_defaults()
{
    return DEFAULT_CONFIG;
}

// warn: silent errors skip
ServerConfig parse_args(int argc, char *argv[])
{
    auto cfg = get_defaults();

    try
    {
        for (int i = 1; i < argc; ++i)
        {
            string arg = argv[i];
            if (arg == "-p" && i + 1 < argc)
                cfg.port = stoi(argv[++i]);
            else if (arg == "-c" && i + 1 < argc)
                cfg.cmd_pattern = regex{argv[++i]};
            else if (arg == "-t" && i + 1 < argc)
                cfg.udp_timeout = milliseconds{stoi(argv[++i])};
        }
    }
    catch (...)
    {
        cerr << "Something went wrong in parse_args(...)" << endl;
    }

    return cfg;
}