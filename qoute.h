
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Qoute {

public:
    Qoute() : qoute(), author(), tags() {}
    Qoute(const string &qoute, const string &author)
         : qoute(qoute), author(author), tags() {}

    void print() {
        std::cout << qoute << std::endl;
        std::cout << "- "<< author << std::endl;
    }

    void addQouteTag(const string &tag) {
        tags.push_back(tag);
    }


protected:
    string qoute;
    string author;
    vector<string> tags;
};
