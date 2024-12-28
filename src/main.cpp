
#include "cliArg.h"
#include "quotes.h"
#include <iostream>

void runTest() {
    std::cout << "Running Tests..." << std::endl;

    std::cout << "\n" << std::endl;
}

int main (int argc, char *argv[]) {
    runTest();

    CliArg cli = CliArg();

    Quotes quotes = Quotes();
    cli.parse(argc, argv, quotes);

    return 0;
}
