
#include "cliArg.h"
#include "quotes.h"
#include "../tests/quotesTest.h"
#include "../tests/fileParseTest.h"

#include <iostream>

/* ===================================================
 * RUN TESTS
 * */
void runTest() {
    std::cout << "Running Tests..." << std::endl;

    QuotesTest qsTest = QuotesTest("QuotesTest");
    qsTest.run();

    FileParseTest fpTest = FileParseTest("FileParseTest");
    fpTest.run();

    std::cout << std::endl;
}

/* ===================================================
 * MAIN - One shall stand, One stall fall
 * */
int main (int argc, char *argv[]) {
    runTest();

    // Construct arg / quotes class
    CliArg cli = CliArg();
    Quotes quotes = Quotes();

    cli.parse(argc, argv, quotes);

    return 0;
}
