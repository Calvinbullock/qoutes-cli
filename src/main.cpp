
#include "cliArg.h"
#include "quotes.h"
#include "../tests/quotesTest.h"

#include <iostream>

void runTest() {
    std::cout << "Running Tests..." << std::endl;

    QuotesTest qsTest = QuotesTest("QuotesTest");
    qsTest.run();

    std::cout << std::endl;
}

int main (int argc, char *argv[]) {
    runTest();

    // Construct arg / quotes class
    CliArg cli = CliArg();
    Quotes quotes = Quotes();

    cli.parse(argc, argv, quotes);

    return 0;
}
