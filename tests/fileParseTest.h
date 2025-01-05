
#pragma once

#include "test.h"
#include "../src/fileParse.h"
#include <string>

//
// Class Definition
class FileParseTest : public Test {

public:
    //
    // Constructor
    FileParseTest(std::string testNameIn) : Test(testNameIn) {}

    //
    // Run all tests
    void run() {
        TestQuoteLineParse_simple();
        TestQuoteLineParse_empty();

        total(); // last function call in run
    }

private:

    /* =========================================================
     *  input: parseKey = "quote"
     *         fileLine = "quote: the wind rises we must try to live"
     *  output: output = "the wind rises we must try to live"
     */
    void TestQuoteLineParse_simple() {
        // setup
        std::string testName = "testQuoteLineParse_simple";
        std::string fileLine = "quote: the wind rises we must try to live";

        // exercise
        std::string postParse = parseLine("quote", fileLine);

        // check
        assertValues(testName, "the wind rises we must try to live", postParse);

        // break down
    }

    /* =========================================================
     *  input: parseKey = "quote"
     *         fileLine = "quote: "
     *  output: output = ""
     */
    void TestQuoteLineParse_empty() {
        // setup
        std::string testName = "testQuoteLineParse_simple";
        std::string fileLine = "";

        // exercise
        std::string postParse = parseLine("quote", fileLine);

        // check
        assertValues(testName, "", postParse);

        // break down
    }

};
