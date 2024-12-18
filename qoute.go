/*
Holds the Quote Strict and associated functions
*/

package main

import (
    "encoding/json"
    "fmt"
    "io"
    "os"
)

type Qoute struct {
    qoute string
    author string
    tags []string
}

func(q *Qoute) print() {
    println(q.qoute)
    println("-", q.author)
}

func(q *Qoute) readToFIle(filePath string ) {

}

func (q *Qoute) readFromFile(filePath string) (err error) {
    // Open the JSON file
    jsonFile, err := os.Open(filePath)
    if err != nil {
        fmt.Println("Error opening file:", err)
        return nil
    }
    defer jsonFile.Close()

    // Read the contents of the file
    byteValue, err := io.ReadAll(jsonFile)
    if err != nil {
        fmt.Println("Error reading file:", err)
        return nil
    }

    // Unmarshal the JSON data into a Person struct
    var qoute Qoute
    err = json.Unmarshal(byteValue, &qoute)
    if err != nil {
        fmt.Println("Error unmarshaling JSON:", err)
        return nil
    }
    return qoute
}

/* ============================================================================
* TESTS
* ========================================================================== */

func runQouteTests() {
    readFromFile_testEmpty()
}

/* ====================================
*   readFromFile Tests
* ================================== */

// WARN: working to pass this test
func readFromFile_testEmpty() (bool) {
    // set up
    filePath := "./tests/empty_qoute.json"
    q := Qoute{}

    // run
    err := q.readFromFile(filePath)
    q.print()

    // check
    if err == nil { return false }

    if q.author == "empty" &&
    q.qoute == "empty" &&
    len(q.tags) == 0 {
        return true
    }

    return false
}



