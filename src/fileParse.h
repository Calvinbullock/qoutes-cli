#pragma once

//
// FILE PARSING FUNCTIONS
// Parses quote files into quote objects
//   and/or a quote into a file formate.

#include "quote.h"
#include <iostream>
#include <string>

/* =========================================================
 * find the lines key, AKA check that this line is representing
 * Opts:
 *    Quote
 *    Author
 *    tags []
 */
inline Quote parseFile(std::string fileName) {
   Quote q;

   return q;
}

/* =========================================================
 * find the lines key, AKA check that this line is representing
 * Opts:
 *    Quote
 *    Author
 *    tags []
 */
inline std::string parseKey(std::string fileLine) {
   return "";
}

/* =========================================================
 * take a key and a fileLine then parse the line into an
 *    Author / quote line and return that.
 */
inline std::string parseLine(std::string parseKey, std::string fileLine) {
   std::string quoteLine;
   std::string lineKey = fileLine.substr(0, parseKey.length());

   if (lineKey == parseKey)
      // +2 to pass the ": " in the input line
      quoteLine = fileLine.substr(parseKey.length() + 2, fileLine.length());

   return quoteLine;
}
