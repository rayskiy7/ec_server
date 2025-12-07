#pragma once

#include <string>
#include <chrono>
#include <regex>

class EchoCmdServer
{
public:
    void work();
    EchoCmdServer(ServerConfig cfg);
    ~EchoCmdServer();
    // TODO: copy/move operations?

private:
    int n_connections;
    ServerConfig cfg;

    std::string process_command(std::string cmd);

    // TODO!!!
};



