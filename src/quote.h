
#pragma once

#include <iostream>
#include <string>
#include <vector>

class Quote {

public:
    //
    // constructors
    Quote() : qoute(), author(), tags() {}
    Quote(const std::string &author, const std::string &qoute)
         : qoute(qoute), author(author), tags() {}

    //
    // print / display
    std::string print() {
        return "    " + qoute + "\n"
             + "    - " + author + "\n";

        std::cout << "    " << qoute << std::endl;
        std::cout << "    - " << author << std::endl;
    }
    void printTags() {
        for (int i = 0; i < tags.size(); i++) {
            std::cout << "1. " << tags[i] << "\n" << std::endl;
        }
    }

    //
    // getters / setters

    //
    // Other
    void format() {
        // TODO: add line brakes every x count of chars
    }

    void addQouteTag(const std::string &tag) {
        tags.push_back(tag);
    }

protected:
    std::string qoute;
    std::string author;
    std::vector<std::string> tags;
};
