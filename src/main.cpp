
#include "cliArg.h"
#include "quotes.h"

int main (int argc, char *argv[]) {
    CliArg cli = CliArg();

    Quotes quotes = Quotes();
    cli.parse(argc, argv, quotes);

    return 0;
}
