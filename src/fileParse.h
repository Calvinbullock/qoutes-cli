#pragma once

#include "quote.h"
#include <iostream>
#include <string>

/*
   Parses quote files into quote objects.
*/

inline Quote parseFile(std::string fileName) {
   Quote q;


   return q;
}

inline std::string parseLine(std::string parseKey, std::string fileLine) {
   std::string quoteLine;
   std::string lineKey = fileLine.substr(0, parseKey.length());

   if (lineKey == parseKey)
      // +2 to pass the ": " in the input line
      quoteLine = fileLine.substr(parseKey.length() + 2, fileLine.length());

   return quoteLine;
}
