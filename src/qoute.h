
#pragma once

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Qoute {

public:
    //
    // constructors
    Qoute() : qoute(), author(), tags() {}
    Qoute(const string &qoute, const string &author)
         : qoute(qoute), author(author), tags() {}

    //
    // print / display
    void print() {
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

    void addQouteTag(const string &tag) {
        tags.push_back(tag);
    }

protected:
    string qoute;
    string author;
    vector<string> tags;
};
