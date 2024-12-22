
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Qoute {

public:
    Qoute(string qoute, string author, vector<string> tags) :
        qoute(qoute), author(author), tags(tags) {}

    void print() {
        std::cout << qoute << std::endl;
        std::cout << "- "<< author << std::endl;
    }


protected:
    string qoute;
    string author;
    vector<std::string> tags;
};
