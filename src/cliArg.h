
#pragma once

#include <iostream>
#include <string>

#include "quote.h"
#include "quotes.h"

class CliArg {

public:
    CliArg() {}
    ~CliArg() {}

    void parse(int argc, char *argv[], Quotes &quotes) {
        // Iterate through arguments (starting from index 1 to skip the program name)
        for (int i = 1; i < argc; ++i) {
            std::string arg = argv[i];

            if (arg == "-h" || arg == "--help") {
                help();

            } else if (arg == "-v" || arg == "--version") {
                std::cout << "Version: 0.01" << std::endl;

            } else if ((arg == "-p" || arg == "--print") && i+1 < argc) {
                print(quotes, i);

            } else if (arg == "-P" || arg == "--printAll") {
                printAll(quotes);

            } else if (arg == "-a" || arg == "--add") {
                addQoute(quotes);

            } else if (arg == "-r" || arg == "--random") {
                printRandom(quotes);

            } else {
                std::cout << "Arg Not Recognised - Argument: " << arg << std::endl;

            }
            std::cout << std::endl;
        }
    }

private:
    void printRandom(Quotes &quotes) {
        quotes.printRandom();
    }

    void printAll(Quotes &quotes) {
        quotes.print();
    }

    void print(Quotes &quotes, int &index) {
        quotes[index + 1]->print();
    }

    void addQoute(Quotes &quotes) {
        std::string quoteBody;
        std::string author;

        std::cout << "Enter the quote: ";
        getline(std::cin, quoteBody);

        std::cout << "Enter the author: ";
        getline(std::cin, author);

        quotes.addQoute(author, quoteBody);
    }

    void help() {
        std::cout << "Help message:\n"
            << "  -h, --help: Display this help message\n"
            << "  -P: Print All qoutes\n"
            << "  -p num: Print qoute number\n"
            << "  -r : Print random qoute\n"
            << "  -a : add a qoute\n"
            << "  <arg2>: Second argument\n"
            << std::endl;
    }
};

// for testing
class cliDerived : public CliArg {
public:

};
