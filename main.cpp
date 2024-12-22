
#include "qoute.h"
#include <vector>

int main (int argc, char *argv[]) {
    vector<string> tags;

    Qoute q = Qoute("To Live or Die", "LeeYe", tags);
    q.print();

    return 0;
}
