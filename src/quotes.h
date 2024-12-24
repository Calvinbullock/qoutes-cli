
#pragma once

#include "quote.h"
#include <iostream>
#include <string>

class Quotes {
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
    // Overides
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
    void print() {
        for (size_t i = 0; i < quoteList.size(); i++) {
            std::cout << i+1 << ". ---- " << std::endl;
            std::cout << quoteList[i]->print() << std::endl;
        }
    }
    void addQoute(string authorName, string quoteBody) {
        quoteList.push_back(new Quote(authorName, quoteBody));
    }
    int getSize() {
        return quoteList.size();
    }

private:
    vector<Quote*> quoteList;
};
