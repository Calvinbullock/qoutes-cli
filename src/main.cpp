
#include "qoute.h"

int main (int argc, char *argv[]) {
    Qoute q = Qoute("To Live or Die", "LeeYe");
    q.addQouteTag("this");

    q.print();

    return 0;
}
