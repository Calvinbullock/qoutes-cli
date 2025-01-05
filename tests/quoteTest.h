
#pragma once

#include "test.h"
#include "../src/quote.h"
#include <string>

//
// Class Definition
class QuoteTest : public Test {

public:
    //
    // Constructor
    QuoteTest(std::string testNameIn) : Test(testNameIn) {}

    //
    // Run all tests
    void run() {
        PLACEHOLDER();

        total(); // last function call in run
    }

private:

    /* =========================================================
     * 0 should be a valid input,
     *  input: index = 0, size = 1
     *  output: index[0] = true
     */
    void PLACEHOLDER() {
        // setup

        // exercise

        // check
        assertValues("", 0, 0);

        // break down
    }

};
