
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
                int index;
                std::string userValue = argv[i+1];
                i++; // move past the user input index

                // catch string to int error
                try {
                    index = std::stoi(userValue);
                } catch (const std::invalid_argument& e) {
                    std::cout << "ERROR: Your quote value '"
                              << userValue
                              << "' is invalid.\n" << std::endl;
                    return;
                }

                std::cout << index << std::endl;
                print(quotes, index);

            } else if (arg == "-P" || arg == "--printAll") {
                printAll(quotes);

            } else if (arg == "-T" || arg == "--printAllTags") {
                // TODO: add a way to print out all avalabel tags
                //      maybe a tags object to store what tags are
                //      available after parsing the database

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
        index--; // change from user base count input to index base 0

        if (!quotes.validateIndex(index)) {
            std::cout << "ERROR: Your qoute could not be found." << std::endl;
            return;
        }
        quotes[index]->print();
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
