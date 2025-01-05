
#pragma once

#include <iostream>
#include <string>

class Test {

public:
    Test(std::string testNameIn) : testName(testNameIn),
                                   failCount(0),
                                   passCount(0),
                                   totalRunCount(0)
    {}

    void run() {

    }

    void total() {
        // pass
        if (failCount == 0 && passCount == totalRunCount) {
            std::cout << testName << " "
                      << passCount << "/" << totalRunCount
                      << " - All Passed ✔️ "
                      << std::endl;

        } else { // fail
            std::cout << testName << " " << passCount << "/"
                << passCount + failCount
                << " - Passed" << std::endl;
        }
    }

    //
    // Assert cases
    void assertValues(std::string caseName, bool value1, bool value2) {
        totalRunCount++;

        if (value1 == value2) {
            passCount++;
        } else {
            failCount++;
            std::cout << "    ❗" << caseName << " -- "
                      << value1 << " != " << value2
                      << std::endl;
        }
    }

    void assertValues(std::string caseName, int value1, int value2) {
        totalRunCount++;

        if (value1 == value2) {
            passCount++;
        } else {
            failCount++;
            std::cout << "    ❗" << caseName << " -- "
                      << value1 << " != " << value2
                      << std::endl;
        }
    }

    void assertValues(std::string caseName, std::string value1, std::string value2) {
        totalRunCount++;

        if (value1 == value2) {
            passCount++;
        } else {
            failCount++;
            std::cout << "    ❗" << caseName << " -- "
                      << value1 << " != " << value2
                      << std::endl;
        }
    }

private:
    std::string testName;
    int passCount;
    int failCount;
    int totalRunCount;
};
