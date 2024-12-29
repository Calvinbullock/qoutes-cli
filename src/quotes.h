
#pragma once

#include "quote.h"
#include "../tests/quotesTest.h"

#include <cassert>
#include <cstdlib>
#include <iostream>
#include <string>

class QuotesTest;

//
// Class Definition
class Quotes {

    friend QuotesTest;

public:
    //
    // constructors
    Quotes() {
        quoteList.push_back(new Quote("Jack", "I'm waveing you over."));
        quoteList.push_back(new Quote("YeYe", "fobar"));
    }
    ~Quotes() {
        // Delete each Quote* in the vector
        for (Quote* quote : quoteList) {
            delete quote;
        }
        quoteList.clear(); // Clear the vector itself
    }

    //
    // Operator Overrides
    const Quote* operator[](size_t index) const {
        if (index >= quoteList.size()) {
            throw std::out_of_range("Index out of bounds");
        }
        return quoteList[index];
    }

    Quote* operator[](size_t index) {
        if (index >= quoteList.size()) {
            throw std::out_of_range("Index out of bounds");
        }
        return quoteList[index];
    }

    //
    // Operations
    void printRandom() {
        // get and check random number
        srand(time(nullptr)); // Seed the random number generator
        int randNum = rand() % quoteList.size();
        assert(0 <= randNum && randNum <= quoteList.size());

        std::cout << quoteList[randNum]->print() << std::endl;
    }
    void print() {
        for (size_t i = 0; i < quoteList.size(); i++) {
            std::cout << i+1 << ". ---- " << std::endl;
            std::cout << quoteList[i]->print() << std::endl;
        }
    }
    void addQoute(std::string authorName, std::string quoteBody) {
        quoteList.push_back(new Quote(authorName, quoteBody));
    }
    int getSize() {
        return quoteList.size();
    }

private:
    std::vector<Quote*> quoteList;
};
