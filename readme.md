# ReadMe for Quote CLI

## RUNNING the program
- `cd build`    - open the build directory
- `cmake ..`    - build the makefile

#### Dependencies
- CMake ver 3.5

#### Manuel Build / run
- `cmake ..`            - build the makefile
- `make`                - build the binary
- `chmod +x qouteCLI`   - give run permission (Linux / MacOS)
- `./qouteCLI`          - run the binary (Linux / MacOS)

## Abilities / Help Docs
-h, --help:     Display this help message
-P:             Print All quotes with quote numbers
-p <quote-num>: Print quote number
-r :            Print random quote
-a :            add a quote

## plans -- Stories
- Tested with unit tests
- a program that display's a quote every time I start a terminal or with a cmd and can add new ones with cli tools
    - nice formatting (when printing)
    - a help doc / tldr
    - store in a csv -- for now
    - add a flag for a category -- "motivational", "emotinal", etc (be able to add and list flags for a qoute)

## Stories
- "sometimes while programming you need a quick burst of motivation, one that does not take you out of the flow, one that does not distract you, here it is qoutes-cli."

