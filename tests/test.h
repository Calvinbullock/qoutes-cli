
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
        if (failCount == 0 && passCount == totalRunCount) {
            std::cout << "All " << testName << "Tests Passed ✔️ " << std::endl;

        } else {
            std::cout << passCount << "/"
                << passCount + failCount
                << " Passed" << std::endl;
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
            std::cout << "❗" << caseName << std::endl;
        }
    }

    void assertValues(std::string caseName, int value1, int value2) {
        totalRunCount++;

        if (value1 == value2) {
            passCount++;
        } else {
            failCount++;
            std::cout << "❗" << caseName << std::endl;
        }
    }

    void assertValues(std::string caseName, std::string value1, std::string value2) {
        totalRunCount++;

        if (value1 == value2) {
            passCount++;
        } else {
            failCount++;
            std::cout << "❗" << caseName << std::endl;
        }
    }

private:
    std::string testName;
    int passCount;
    int failCount;
    int totalRunCount;
};
