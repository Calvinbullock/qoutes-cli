
#pragma once

#include <iostream>
#include <string>

#include "quote.h"
#include "quotes.h"

class Cli {

public:
    Cli() {}
    ~Cli() {}

    void parse(int argc, char *argv[], Quotes &quotes) {
        // Iterate through arguments (starting from index 1 to skip the program name)
        for (int i = 1; i < argc; ++i) {
            std::string arg = argv[i];

            // Process each argument as needed
            if (arg == "-h" || arg == "--help") {
                help();

            } else if (arg == "-v" || arg == "--version") {
                std::cout << "Version: 1.0\n" << std::endl;

            } else if ((arg == "-p" || arg == "--print") && i+1 < argc) {
                print(quotes, i);

            } else if (arg == "-P" || arg == "--printAll") {
                printAll(quotes);

            } else if (arg == "-a" || arg == "--add") {
                addQoute(quotes);

            } else {
                std::cout << "Argument: " << arg << std::endl;

            }
            std::cout << std::endl;
        }
    }

private:
    void printAll(Quotes &quotes) {
        std::cout << quotes.getSize() << std::endl;

        quotes.print();
    }

    void print(Quotes &quotes, int &index) {
        quotes[index + 1]->print();
    }

    void addQoute(Quotes &quotes) {
        std::string quoteBody;
        std::string author;

        cout << "Enter the quote: ";
        getline(cin, quoteBody);

        cout << "Enter the author: ";
        getline(cin, author);

        quotes.addQoute(author, quoteBody);
    }

    void help() {
        std::cout << "Help message:\n"
            << "  -h, --help: Display this help message\n"
            << "  -P: Print All qoutes\n"
            << "  -p num: Print qoute number\n"
            << "  <arg2>: Second argument\n"
            << std::endl;
    }
};


// for testing
class cliDerived : public Cli {
public:

};
