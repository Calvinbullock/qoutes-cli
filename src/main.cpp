
#include "qoute.h"
#include "cli.h"

int main (int argc, char *argv[]) {

    Cli cli = Cli();
    cli.parse(argc, argv);

    return 0;
}
