
#include "cli.h"
#include "quotes.h"

int main (int argc, char *argv[]) {
    Cli cli = Cli();

    Quotes quotes = Quotes();
    cli.parse(argc, argv, quotes);

    return 0;
}
