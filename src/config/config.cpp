#include <chrono>
#include <regex>
#include "../../inc/config.h"

using namespace std;
using namespace chrono;

struct ServerConfig
{
    regex cmd_pattern;
    milliseconds udp_timeout;
    int port;
} DEFAULT_CONFIG{
    .cmd_pattern = regex{"/(.*)"},
    .udp_timeout = 10s,
    .port = 4099,
};
