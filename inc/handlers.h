#pragma once

#include "server.h"

enum class Command
{
    unknown,
    time,
    stats,
    shutdown,
};

char* handle_command(Command cmd, EchoCmdServer &server);
