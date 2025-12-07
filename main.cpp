#include "inc/server.h"
#include "inc/config.h"

int main(int argc, char *argv[])
{
    ServerConfig cfg = parse_args(argc, argv);
    EchoCmdServer server{cfg};
    server.work();
}