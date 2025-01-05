
#pragma once

#include "test.h"
#include "../src/quotes.h"
#include <string>

//
// Class Definition
class QuotesTest : public Test {

public:
    //
    // Constructor
    QuotesTest(std::string testNameIn) : Test(testNameIn) {}

    //
    // Run all tests
    void run() {
        validateIndexTest_0();

        total(); // last function call in run
    }

private:

    /* =========================================================
     * 0 should be a valid input,
     *  input: index = 0, size = 1
     *  output: index[0] = true
     */
    void validateIndexTest_0() {
        // TODO:
        /*
        // setup
        std::string testCase = "validateIndexTest_0";
        Quotes qs = Quotes();
        qs.quoteList.push_back(new Quote("", ""));

        // exercise
        bool isValid = qs.validateIndex(0);

        // check
        assertValues(testCase, isValid, true);
        assertValues(testCase, qs.quoteList.size(), 1);

        // break down
        delete[] qs.quoteList[0];
        */
    }

};
