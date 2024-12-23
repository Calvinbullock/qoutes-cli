
#pragma once

#include <iostream>
#include <string>

#include "qoute.h"

class Cli {

public:
    Cli() {}
    ~Cli() {}

    void parse(int argc, char *argv[]) {
        // Iterate through arguments (starting from index 1 to skip the program name)
        for (int i = 1; i < argc; ++i) {
            std::string arg = argv[i];

            // Process each argument as needed
            if (arg == "-h" || arg == "--help") {
                help();

            } else if (arg == "-v" || arg == "--version") {
                std::cout << "Version: 1.0\n" << std::endl;

            } else if (arg == "-p" || arg == "--print") {
                printQoute();

            } else {
                std::cout << "Argument: " << arg << std::endl;

            }
            std::cout << std::endl;
        }
    }

private:

    void printQoute() {
        Qoute q = Qoute("To Live or Die", "LeeYe");
        q.addQouteTag("this");

        q.print();
    }

    void help() {
        std::cout << "Help message:\n"
            << "  -h, --help: Display this help message\n"
            << "  <arg1>: First argument\n"
            << "  <arg2>: Second argument\n"
            << std::endl;
    }

};
